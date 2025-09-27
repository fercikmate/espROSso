# espROSso
C firmware converting ROS 2 Twist messages to PWM signals for motor and servo control via microros on ESP32-C6-zero MCU. 

# Project Summary and Implementation Attempts
The goal of this project was to run micro-ROS on the ESP32-C6-zero MCU, converting ROS 2 Twist messages into PWM signals for motor and servo control, using multiple development environments and toolchains.
Several approaches were attempted, combining different operating systems, build tools, and micro-ROS integration methods.
    
## Environments, approaches and results
1. Windows 10
    - Windows was found to be generally incompatible with ROS 2 workflows, the approach was quickly abandoned
2. WSL(Ubuntu 22.04)
- 2.1 micro_ros_setup
        https://github.com/micro-ROS/micro_ros_setup
        micro_ros_setup does not support ESP32-C6. Build completed for standard ESP32, but flashing didnt work. 
- 2.2 platformio
        Platformio still has general problems with Linux pathing while running in WSL.
- 2.3 micro_ros_espidf_component
        https://github.com/micro-ROS/micro_ros_espidf_component
        This was the closest to success. The firmware built and flashed successfully, and the int32_publisher example ran, with the MCU successfully connecting to the agent over 2.4 GHz Wi-Fi. However, the subscriber example consistently triggered a Guru Meditation Error during task execution. See more at https://stackoverflow.com/questions/79771649/esp32-c6-micro-ros-guru-meditation-error-core-0-panic-illegal-instruction-in
3. VirtualBox(Ubuntu 22.04)
- 3.1 platformio
            PlatformIO’s ESP32 platform is designed for standard ESP32 chips. Tried out pioarduino (https://github.com/pioarduino/platform-espressif32) but build didnt work
- 3.2 micro_ros_espidf_component
        Same Guru Meditation error as in 2.3. Firmware flashed but crashed immediately on subscriber task execution.
- 3.3 arduino IDE
        https://github.com/micro-ROS/micro_ros_arduino
        Incomplete support for micro-ROS. Libraries were not precompiled; manual building attempt wat performed.
      
## Attempt to Build a micro-ROS Arduino Static Library for ESP32-C6

### Goal
Generate a precompiled static library (`libmicroros.a` + headers) suitable for inclusion in the Arduino IDE for an **ESP32-C6** target, starting from the official micro-ROS Arduino repository.

### Environment
- Host OS: Ubuntu 22.04
- Docker installed and working
- micro-ROS Arduino repository cloned into `~/microros_esp32_c6/micro_ros_arduino`

### Official Instructions Followed
From the [micro-ROS/micro_ros_arduino](https://github.com/micro-ROS/micro_ros_arduino) README:

```bash
sudo docker pull microros/micro_ros_static_library_builder:kilted

sudo docker run -it --rm   -v $(pwd):/project   --env MICROROS_LIBRARY_FOLDER=extras   microros/micro_ros_static_library_builder:kilted
```

Optional single-target build:


```bash
sudo docker run -it --rm   -v $(pwd):/project   --env MICROROS_LIBRARY_FOLDER=extras   microros/micro_ros_static_library_builder:kilted -p <LIBRARY_TARGET>
```

### Steps Actually Performed
1. Pulled the builder image:
    ```bash
    sudo docker pull microros/micro_ros_static_library_builder:kilted
    ```

2. Ran the container from inside `~/microros_esp32_c6/micro_ros_arduino`:
    ```bash
    sudo docker run -it --rm       -v $(pwd):/project       --env MICROROS_LIBRARY_FOLDER=extras       microros/micro_ros_static_library_builder:kilted
    ```
    This started a long build.

3. Tried the ESP32 target explicitly:
    ```bash
    sudo docker run -it --rm       -v $(pwd):/project       --env MICROROS_LIBRARY_FOLDER=extras       microros/micro_ros_static_library_builder:kilted -p esp32
    ```

### Problems Encountered
- The builder complained:
  ```
  dos2unix: /project/extras/library_generation/library_generation.sh: No such file or directory
  ```
  meaning our `extras/library_generation/` directory didn’t contain the expected script.

- The `micro_ros_static_library` repository itself is not public; the Arduino repository only contains the prebuilt binaries for supported boards.

- Even though the Docker build ran for a long time, the resulting folder lacked the full set of **include** headers needed to use `libmicroros.a` as an Arduino ZIP library. Only `libmicroros.a` appeared under `src/esp32/`.

### Current State
- We can locate a prebuilt `libmicroros.a` for ESP32 in:
  ```
  micro_ros_arduino/src/esp32/libmicroros.a
  ```
- We do **not** have the matching header files or library metadata necessary for Arduino’s “Add .ZIP Library…” feature.


# Conclusion

Rebuilding the micro-ROS Arduino static library for an unsupported board (ESP32-C6) is not straightforward with only the public repositories. The Docker image expects a `library_generation.sh` and metadata from the private `micro_ros_static_library` repository. Without those, it will not generate a full Arduino-compatible package.

Currently, micro-ROS libraries primarily support standard ESP32, not the next-generation ESP32-C6 MCU.
Despite multiple attempts across Windows, WSL2, and VirtualBox, a fully functional micro-ROS application on the ESP32-C6-zero could not be achieved. The closest approach was using ESP-IDF with micro_ros_espidf_component, which successfully built and flashed firmware, but runtime execution always resulted in a Guru Meditation Error.

# Recommendations Next Steps:
1. Use a fully supported MCU target for micro-ROS
2. Prefer native Linux environment for flashing and debugging
3. The most promising approaches are micro_ros_espidf_component (2.3) and pioarduino (3.1), as the community is gradually focusing on supporting newer ESP releases
4. If ESP32-C6 support is critical, either:
    - Ask the micro-ROS maintainers for access to `micro_ros_static_library` or an updated builder image with C6 support.
    - Manually create an Arduino library folder with your `libmicroros.a` plus the headers from the micro-ROS client stack built separately.
