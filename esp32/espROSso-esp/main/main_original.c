#include <string.h>
#include <stdio.h>
#include <unistd.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"

#if defined(CONFIG_MICRO_ROS_ESP_NETIF_WLAN) || defined(CONFIG_MICRO_ROS_ESP_NETIF_ENET)
#include <uros_network_interfaces.h>
#endif
#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/string.h>
#include <geometry_msgs/msg/twist.h>
#include "driver/ledc.h"

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
#include <rmw_microros/rmw_microros.h>
#endif

// Define missing configuration values
#ifndef CONFIG_MICRO_ROS_APP_STACK
#define CONFIG_MICRO_ROS_APP_STACK 8192
#endif

#ifndef CONFIG_MICRO_ROS_APP_TASK_PRIO
#define CONFIG_MICRO_ROS_APP_TASK_PRIO 5
#endif

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc);vTaskDelete(NULL);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

geometry_msgs__msg__Twist twist_msg; // Message storage


// Define pins w ESP-IDF framework
#define MOTOR_PWM_PIN 18
#define SERVO_PWM_PIN 19

#define MOTOR_MIN_DUTY 200   // can be up to 1023 for 10-bit resolution
#define MOTOR_MAX_DUTY 900   // Change as needed
#define SERVO_MIN_DUTY 300   // min is backward max
#define SERVO_MAX_DUTY 800   // max is forward max

void pwm_init() {
    // Timer for servo (eg. 50Hz)
    ledc_timer_config_t servo_timer = {
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .timer_num = LEDC_TIMER_0,
        .duty_resolution = LEDC_TIMER_10_BIT,
        .freq_hz = 50, 
        .clk_cfg = LEDC_AUTO_CLK
    };
    ledc_timer_config(&servo_timer);

    // Timer for motor (eg. 1000Hz)
    ledc_timer_config_t motor_timer = {
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .timer_num = LEDC_TIMER_1,
        .duty_resolution = LEDC_TIMER_10_BIT,
        .freq_hz = 1000, // 1kHz for motor
        .clk_cfg = LEDC_AUTO_CLK
    };
    ledc_timer_config(&motor_timer);

    // Servo channel uses TIMER_0
    ledc_channel_config_t servo_channel = {
        .gpio_num = SERVO_PWM_PIN,
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .channel = LEDC_CHANNEL_0,
        .timer_sel = LEDC_TIMER_0,
        .duty = 0,
        .hpoint = 0
    };
    ledc_channel_config(&servo_channel);

    // Motor channel uses TIMER_1
    ledc_channel_config_t motor_channel = {
        .gpio_num = MOTOR_PWM_PIN,
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .channel = LEDC_CHANNEL_1,
        .timer_sel = LEDC_TIMER_1,
        .duty = 0,
        .hpoint = 0
    };
    ledc_channel_config(&motor_channel);
}

// Example hardware PWM functions
void set_servo_pwm(int pwm_value) {
    int duty = pwm_value;
    if (duty < SERVO_MIN_DUTY) duty = SERVO_MIN_DUTY;
    if (duty > SERVO_MAX_DUTY) duty = SERVO_MAX_DUTY;
    printf("Servo PWM=%d\n", duty);
    ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, duty); // Servo: channel 0
    ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);
}

void set_motor_pwm(int pwm_value) {
    int duty = pwm_value;
    if (duty < MOTOR_MIN_DUTY) duty = MOTOR_MIN_DUTY;
    if (duty > MOTOR_MAX_DUTY) duty = MOTOR_MAX_DUTY;
    printf("Motor PWM=%d\n", duty);
    ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_1, duty); // Motor: channel 1
    ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_1);
}

void twist_callback(const void * msgin) {
    const geometry_msgs__msg__Twist * msg = (const geometry_msgs__msg__Twist *)msgin;
    printf("Received Twist: linear.x=%.2f angular.z=%.2f\n",
           msg->linear.x, msg->angular.z);

    float x = msg->linear.x;
    if (x > 1) x = 1;
    if (x < -1) x = -1;

    // Map [-1, 1] to [MOTOR_MIN_DUTY, MOTOR_MAX_DUTY]
    int motor_pwm = MOTOR_MIN_DUTY + (MOTOR_MAX_DUTY - MOTOR_MIN_DUTY) * (x + 1) / 2;
    set_motor_pwm(motor_pwm);

    float z = msg->angular.z;
    if (z > 1) z = 1;
    if (z < -1) z = -1;

    // Map angular.z [-1, 1] to servo PWM [MIN_PWM, MAX_PWM]
    int servo_pwm = SERVO_MIN_DUTY + (SERVO_MAX_DUTY - SERVO_MIN_DUTY) * (z + 1) / 2;
    set_servo_pwm(servo_pwm);
}

void micro_ros_task(void * arg)
{
    rcl_allocator_t allocator = rcl_get_default_allocator();
    rclc_support_t support;

    // Create init_options.
    rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
    RCCHECK(rcl_init_options_init(&init_options, allocator));

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
    rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&init_options);

#ifdef CONFIG_MICRO_ROS_ESP_NETIF_WLAN
    // Only set UDP address if using Wi-Fi transport
    RCCHECK(rmw_uros_options_set_udp_address(CONFIG_MICRO_ROS_AGENT_IP, CONFIG_MICRO_ROS_AGENT_PORT, rmw_options));
#endif
    // UART transport requires no additional configuration - pins are set in sdkconfig
    
    //RCCHECK(rmw_uros_discover_agent(rmw_options));
#endif

    // Setup support structure.
    RCCHECK(rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator));

    // Create node.
    rcl_node_t node = rcl_get_zero_initialized_node();
    RCCHECK(rclc_node_init_default(&node, "dummy_client", "", &support));

    // Create subscription.
    rcl_subscription_t sub = rcl_get_zero_initialized_subscription();
    RCCHECK(rclc_subscription_init_default(
        &sub,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
        "/cmd_vel"));

    // Create executor.
    rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
    RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
    unsigned int rcl_wait_timeout = 1000;   // in ms
    RCCHECK(rclc_executor_set_timeout(&executor, RCL_MS_TO_NS(rcl_wait_timeout)));

    // Add subscription to executor.
    RCCHECK(rclc_executor_add_subscription(&executor, &sub, &twist_msg, &twist_callback, ON_NEW_DATA));

    pwm_init(); // Initialize PWM

    printf("Dummy micro-ROS client running…\n");
    
    // Spin forever.
    while(1){
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
        usleep(100000);
    }

    // Free resources.
    RCCHECK(rcl_subscription_fini(&sub, &node));
    RCCHECK(rcl_node_fini(&node));

    vTaskDelete(NULL);
}

void app_main(void) {
#if defined(CONFIG_MICRO_ROS_ESP_NETIF_WLAN) || defined(CONFIG_MICRO_ROS_ESP_NETIF_ENET)
    ESP_ERROR_CHECK(uros_network_interface_initialize());
#endif

    //pin micro-ros task in APP_CPU to make PRO_CPU to deal with wifi:
    xTaskCreate(micro_ros_task,
            "uros_task",
            CONFIG_MICRO_ROS_APP_STACK,
            NULL,
            CONFIG_MICRO_ROS_APP_TASK_PRIO,
            NULL);
}
