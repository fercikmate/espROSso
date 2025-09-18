#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <geometry_msgs/msg/twist.h>
#include <stdio.h>
#include "driver/ledc.h"

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

int main() {
    rcl_allocator_t allocator = rcl_get_default_allocator();
    rclc_support_t support;
    rclc_support_init(&support, 0, NULL, &allocator);

    rcl_node_t node;
    rclc_node_init_default(&node, "dummy_client", "", &support);

    rcl_subscription_t sub;
    rclc_subscription_init_default(
        &sub,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
        "/cmd_vel"
    );

    rclc_executor_t executor;
    rclc_executor_init(&executor, &support.context, 1, &allocator);
    rclc_executor_add_subscription(&executor, &sub, &twist_msg, &twist_callback, ON_NEW_DATA);

    pwm_init(); // Initialize PWM

    printf("Dummy micro-ROS client running…\n");
    rclc_executor_spin(&executor);

    rcl_ret_t ret;
    ret = rcl_subscription_fini(&sub, &node);
    if (ret != RCL_RET_OK) {
        printf("Failed to finalize subscription\n");
    }
    ret = rcl_node_fini(&node);
    if (ret != RCL_RET_OK) {
        printf("Failed to finalize node\n");
    }
    return 0;
}
