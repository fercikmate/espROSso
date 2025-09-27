# espROSso
C firmware converting ROS 2 Twist messages to PWM signals for motor and servo control via microros on ESP32-C6-zero MCU. 

Project Summary and Implementation Attempts
    The goal of this project was to run micro-ROS on the ESP32-C6-zero MCU, converting ROS 2 Twist messages into PWM signals for motor and servo control, using multiple development environments and toolchains.
    Several approaches were attempted, combining different operating systems, build tools, and micro-ROS integration methods.
    
Environments, approaches and results:
    1. Windows 10
        - Windows was found to be generally incompatible with ROS 2 workflows, the approach was quickly abandoned
    2. WSL(Ubuntu 22.04)
        2.1 micro_ros_setup
            https://github.com/micro-ROS/micro_ros_setup
            micro_ros_setup does not support ESP32-C6. Build completed for standard ESP32, but flashing didnt work. 
        2.2 platformio
            Platformio still has general problems with Linux pathing while running in WSL.
        2.3 micro_ros_espidf_component
            https://github.com/micro-ROS/micro_ros_espidf_component
            This was the closest to success. The firmware built and flashed successfully, and the int32_publisher example ran, with the MCU successfully connecting to the agent over 2.4 GHz Wi-Fi. However, the subscriber example consistently triggered a Guru Meditation Error during task execution. See more at https://stackoverflow.com/questions/79771649/esp32-c6-micro-ros-guru-meditation-error-core-0-panic-illegal-instruction-in
    3. VirtualBox(Ubuntu 22.04)
        3.1 platformio
            PlatformIO’s ESP32 platform is designed for standard ESP32 chips. Tried out pioarduino (https://github.com/pioarduino/platform-espressif32) but build didnt work
        3.2 micro_ros_espidf_component
            Same Guru Meditation error as in 2.3. Firmware flashed but crashed immediately on subscriber task execution.
        3.3 arduino IDE
            https://github.com/micro-ROS/micro_ros_arduino
            Incomplete support for micro-ROS. Libraries were not precompiled; manual compilation attempts produced multiple errors.

Conclusion
    Currently, micro-ROS libraries primarily support standard ESP32, not the next-generation ESP32-C6 MCU.
    Despite multiple attempts across Windows, WSL2, and VirtualBox, a fully functional micro-ROS application on the ESP32-C6-zero could not be achieved. The closest approach was using ESP-IDF with micro_ros_espidf_component, which successfully built and flashed firmware, but runtime execution always resulted in a Guru Meditation Error.

Recommendations for future work:
    1. Use a fully supported MCU target for micro-ROS
    2. Prefer native Linux environment for flashing and debugging
    3. The most promising approaches are micro_ros_espidf_component (2.3) and pioarduino (3.1), as the community is gradually focusing on supporting newer ESP releases.