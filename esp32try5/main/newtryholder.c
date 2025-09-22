#include <string.h>
#include <stdio.h>
#include <unistd.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"
#include "driver/ledc.h"

#include <uros_network_interfaces.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <geometry_msgs/msg/twist.h>
#include <std_msgs/msg/int32.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
#include <rmw_microros/rmw_microros.h>
#endif

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc);vTaskDelete(NULL);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

// Motor and servo pins
#define MOTOR_PWM_PIN 18
#define SERVO_PWM_PIN 19
#define MOTOR_MIN_DUTY 200   
#define MOTOR_MAX_DUTY 900   
#define SERVO_MIN_DUTY 300   
#define SERVO_MAX_DUTY 800   

// rcl_publisher_t publisher;
rcl_subscription_t subscriber;
// std_msgs__msg__Int32 send_msg;
geometry_msgs__msg__Twist recv_msg;

void pwm_init(void) {
    // Timer for servo (50Hz)
    ledc_timer_config_t servo_timer = {
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .timer_num = LEDC_TIMER_0,
        .duty_resolution = LEDC_TIMER_10_BIT,
        .freq_hz = 50, 
        .clk_cfg = LEDC_AUTO_CLK
    };
    printf("Configuring servo timer\n");
    ledc_timer_config(&servo_timer);

    // Timer for motor (1000Hz)
    ledc_timer_config_t motor_timer = {
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .timer_num = LEDC_TIMER_1,
        .duty_resolution = LEDC_TIMER_10_BIT,
        .freq_hz = 1000,
        .clk_cfg = LEDC_AUTO_CLK
    };
    printf("Configuring motor timer\n");
    ledc_timer_config(&motor_timer);

    // Servo channel
    ledc_channel_config_t servo_channel = {
        .gpio_num = SERVO_PWM_PIN,
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .channel = LEDC_CHANNEL_0,
        .timer_sel = LEDC_TIMER_0,
        .duty = 512, // neutral position
        .hpoint = 0
    };
    printf("Configuring servo channel\n");
    ledc_channel_config(&servo_channel);

    // Motor channel
    ledc_channel_config_t motor_channel = {
        .gpio_num = MOTOR_PWM_PIN,
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .channel = LEDC_CHANNEL_1,
        .timer_sel = LEDC_TIMER_1,
        .duty = 0, // stopped
        .hpoint = 0
    };
    printf("Configuring motor channel\n");
    ledc_channel_config(&motor_channel);
}

void set_servo_pwm(int pwm_value) {
    printf("set_servo_pwm called with %d\n", pwm_value);
    int duty = pwm_value;
    if (duty < SERVO_MIN_DUTY) duty = SERVO_MIN_DUTY;
    if (duty > SERVO_MAX_DUTY) duty = SERVO_MAX_DUTY;
    ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, duty);
    ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);
}

void set_motor_pwm(int pwm_value) {
    printf("set_motor_pwm called with %d\n", pwm_value);
    int duty = pwm_value;
    if (duty < MOTOR_MIN_DUTY) duty = MOTOR_MIN_DUTY;
    if (duty > MOTOR_MAX_DUTY) duty = MOTOR_MAX_DUTY;
    ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_1, duty);
    ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_1);
}

void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
    
    (void) last_call_time;
    if (timer != NULL) {
        // Publisher callback commented out
        // RCSOFTCHECK(rcl_publish(&publisher, &send_msg, NULL));
        // printf("Sent: %d\n", (int) send_msg.data);
        // send_msg.data++;
        printf("Timer tick\n");
    }
}

void subscription_callback(const void * msgin)
{
     printf("subscription_callback called!\n");
    const geometry_msgs__msg__Twist * msg = (const geometry_msgs__msg__Twist *)msgin;
    printf("Received Twist: linear.x=%.2f angular.z=%.2f\n", msg->linear.x, msg->angular.z);

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
    
    printf("Motor PWM: %d, Servo PWM: %d\n", motor_pwm, servo_pwm);
   
}

void micro_ros_task(void * arg)
{
    printf("micro_ros_task started\n");
    rcl_allocator_t allocator = rcl_get_default_allocator();
    printf("Got default allocator\n");
    rclc_support_t support;
    printf("Support structure declared\n"); 

    // Create init_options.
    rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
    printf ("Initializing init_options\n");
    RCCHECK(rcl_init_options_init(&init_options, allocator));
    printf("Init options initialized\n");

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
    rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&init_options);
    printf("Got RMW options\n");
    // Static Agent IP and port can be used instead of autodisvery.
    RCCHECK(rmw_uros_options_set_udp_address(CONFIG_MICRO_ROS_AGENT_IP, CONFIG_MICRO_ROS_AGENT_PORT, rmw_options));
    printf("Set UDP address\n");
    //RCCHECK(rmw_uros_discover_agent(rmw_options));
#endif
    // Setup support structure.
    RCCHECK(rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator));
    printf("Support structure initialized\n");
    // Create node.
    rcl_node_t node = rcl_get_zero_initialized_node();
    printf("Creating node\n");
    RCCHECK(rclc_node_init_default(&node, "esp32_robot_controller", "", &support));
    printf("Node created\n");
    // Create publisher (commented out).
    // RCCHECK(rclc_publisher_init_default(
    //     &publisher,
    //     &node,
    //     ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
    //     "robot_status"));

    // Create subscriber.
    RCCHECK(rclc_subscription_init_default(
        &subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
        "/cmd_vel"));
    printf("Subscriber created\n");
    // Create timer.
    rcl_timer_t timer = rcl_get_zero_initialized_timer();
    printf("Timer initialized\n");
    const unsigned int timer_timeout = 10000;//every 10 seconds
    RCCHECK(rclc_timer_init_default2(
        &timer,
        &support,
        RCL_MS_TO_NS(timer_timeout),
        timer_callback,
        true));
        printf("Timer configured\n");

    // Create executor.
    rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
    printf("Executor initialized\n");
    RCCHECK(rclc_executor_init(&executor, &support.context, 2, &allocator)); // Changed back to 2 for timer + subscription
    printf("Executor initialized with context\n");
    unsigned int rcl_wait_timeout = 100;   // in ms
    RCCHECK(rclc_executor_set_timeout(&executor, RCL_MS_TO_NS(rcl_wait_timeout)));
    printf("Executor timeout set\n");
    // Add timer and subscriber to executor.
    RCCHECK(rclc_executor_add_timer(&executor, &timer));
    printf("Timer added to executor\n");
    RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &recv_msg, &subscription_callback, ON_NEW_DATA));
    printf("Subscription added to executor\n");
    // Initialize message structures
    geometry_msgs__msg__Twist__init(&recv_msg);
    printf("Message structure initialized\n");
    
    printf("ESP32 robot controller running, waiting for /cmd_vel messages...\n");
    printf("Timer tick every %d ms\n", timer_timeout); // Updated message
    // Spin forever.
    // send_msg.data = 1; // Commented out
    rclc_executor_spin(&executor);

    // Free resources.
    printf("Cleaning up\n");
    RCCHECK(rcl_subscription_fini(&subscriber, &node));

    // RCCHECK(rcl_publisher_fini(&publisher, &node)); // Commented out
    printf("Finalizing node\n");
    RCCHECK(rcl_node_fini(&node));
    
    // Clean up message structures
    printf("Cleaning up message structures\n");
    geometry_msgs__msg__Twist__fini(&recv_msg);

    printf("Deleting task\n");
    vTaskDelete(NULL);
}

void app_main(void)
{
   
   

#if defined(CONFIG_MICRO_ROS_ESP_NETIF_WLAN) || defined(CONFIG_MICRO_ROS_ESP_NETIF_ENET)
    ESP_ERROR_CHECK(uros_network_interface_initialize());
#endif
 // Initialize PWM for motor and servo
    printf("Initializing PWM\n");
    pwm_init();
   
    printf("Starting micro-ROS task\n");
    xTaskCreate(micro_ros_task,
            "uros_task",
            CONFIG_MICRO_ROS_APP_STACK,//16000
            NULL,
            CONFIG_MICRO_ROS_APP_TASK_PRIO,//5
            NULL);
}
