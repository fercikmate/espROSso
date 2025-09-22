#include <stdio.h>
#include <string.h>
#include "driver/ledc.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/semphr.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_netif.h"
#include "nvs_flash.h"
#include "mqtt_client.h"

// Custom Twist message structure (FreeRTOS compatible!)
typedef struct {
    double linear_x;
    double linear_y;
    double linear_z;
    double angular_x;
    double angular_y;
    double angular_z;
} twist_msg_t;

// FreeRTOS queue for inter-task communication
QueueHandle_t twist_queue;
twist_msg_t current_twist = {0};

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

void set_servo_pwm(int pwm_value) {
    int duty = pwm_value;
    if (duty < SERVO_MIN_DUTY) duty = SERVO_MIN_DUTY;
    if (duty > SERVO_MAX_DUTY) duty = SERVO_MAX_DUTY;
    printf("Servo PWM=%d\n", duty);
    ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, duty);
    ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);
}

void set_motor_pwm(int pwm_value) {
    int duty = pwm_value;
    if (duty < MOTOR_MIN_DUTY) duty = MOTOR_MIN_DUTY;
    if (duty > MOTOR_MAX_DUTY) duty = MOTOR_MAX_DUTY;
    printf("Motor PWM=%d\n", duty);
    ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_1, duty);
    ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_1);
}

// Test function to demonstrate PWM control
void test_pwm_control() {
    printf("Testing PWM control...\n");
    
    // Test motor forward
    printf("Motor forward (75%% speed)\n");
    int motor_pwm = MOTOR_MIN_DUTY + (MOTOR_MAX_DUTY - MOTOR_MIN_DUTY) * 0.75;
    set_motor_pwm(motor_pwm);
    
    // Test servo center
    printf("Servo center\n");
    int servo_pwm = SERVO_MIN_DUTY + (SERVO_MAX_DUTY - SERVO_MIN_DUTY) / 2;
    set_servo_pwm(servo_pwm);
    
    vTaskDelay(2000 / portTICK_PERIOD_MS); // Wait 2 seconds
    
    // Test servo left
    printf("Servo left\n");
    set_servo_pwm(SERVO_MIN_DUTY);
    
    vTaskDelay(1000 / portTICK_PERIOD_MS); // Wait 1 second
    
    // Test servo right
    printf("Servo right\n");
    set_servo_pwm(SERVO_MAX_DUTY);
    
    vTaskDelay(1000 / portTICK_PERIOD_MS); // Wait 1 second
    
    // Stop motor
    printf("Motor stop\n");
    set_motor_pwm(MOTOR_MIN_DUTY);
    
    // Center servo
    printf("Servo center\n");
    set_servo_pwm(servo_pwm);
}

// FreeRTOS Task: Motor Control
void motor_control_task(void *parameters) {
    twist_msg_t received_twist;
    
    while (1) {
        // Wait for Twist messages from queue
        if (xQueueReceive(twist_queue, &received_twist, portMAX_DELAY)) {
            printf("Motor task received: linear.x=%.2f angular.z=%.2f\n",
                   received_twist.linear_x, received_twist.angular_z);
            
            // Control motor based on linear.x
            float x = received_twist.linear_x;
            if (x > 1) x = 1;
            if (x < -1) x = -1;
            
            int motor_pwm = MOTOR_MIN_DUTY + (MOTOR_MAX_DUTY - MOTOR_MIN_DUTY) * (x + 1) / 2;
            set_motor_pwm(motor_pwm);
            
            // Control servo based on angular.z
            float z = received_twist.angular_z;
            if (z > 1) z = 1;
            if (z < -1) z = -1;
            
            int servo_pwm = SERVO_MIN_DUTY + (SERVO_MAX_DUTY - SERVO_MIN_DUTY) * (z + 1) / 2;
            set_servo_pwm(servo_pwm);
        }
    }
}

// FreeRTOS Task: Network Communication (MQTT)
void mqtt_task(void *parameters) {
    // Initialize NVS for WiFi
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);
    
    // Initialize network
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());
    
    // TODO: Add WiFi and MQTT setup here
    printf("MQTT task running...\n");
    
    // Simulate receiving messages (replace with actual MQTT)
    while (1) {
        twist_msg_t test_twist = {
            .linear_x = 0.5,
            .angular_z = 0.2
        };
        
        // Send to motor control task via queue
        xQueueSend(twist_queue, &test_twist, 0);
        
        vTaskDelay(2000 / portTICK_PERIOD_MS); // Send every 2 seconds
    }
}

void app_main() {
    // Initialize PWM
    pwm_init();
    
    // Create FreeRTOS queue for Twist messages
    twist_queue = xQueueCreate(10, sizeof(twist_msg_t));
    if (twist_queue == NULL) {
        printf("Failed to create queue\n");
        return;
    }
    
    // Create FreeRTOS tasks
    xTaskCreate(motor_control_task, "motor_ctrl", 4096, NULL, 5, NULL);
    xTaskCreate(mqtt_task, "mqtt_comm", 8192, NULL, 4, NULL);
    
    printf("FreeRTOS ESP32 Twist subscriber running...\n");
}
