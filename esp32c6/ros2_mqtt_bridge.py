#!/usr/bin/env python3
"""
ROS2 to MQTT Bridge for ESP32
Subscribes to /cmd_vel (geometry_msgs/Twist) and publishes to MQTT as JSON
"""

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import paho.mqtt.client as mqtt
import json

class ROS2MQTTBridge(Node):
    def __init__(self):
        super().__init__('ros2_mqtt_bridge')
        
        # MQTT setup
        self.mqtt_client = mqtt.Client()
        self.mqtt_client.connect("your-broker-ip", 1883, 60)
        
        # ROS2 subscription
        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.twist_callback,
            10
        )
        
        self.get_logger().info('ROS2-MQTT Bridge started')
    
    def twist_callback(self, msg):
        # Convert ROS2 Twist to JSON
        twist_json = {
            "linear": {
                "x": msg.linear.x,
                "y": msg.linear.y, 
                "z": msg.linear.z
            },
            "angular": {
                "x": msg.angular.x,
                "y": msg.angular.y,
                "z": msg.angular.z
            }
        }
        
        # Publish to MQTT
        json_str = json.dumps(twist_json)
        self.mqtt_client.publish("/cmd_vel", json_str)
        self.get_logger().info(f'Published: {json_str}')

def main(args=None):
    rclpy.init(args=args)
    bridge = ROS2MQTTBridge()
    rclpy.spin(bridge)
    bridge.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()