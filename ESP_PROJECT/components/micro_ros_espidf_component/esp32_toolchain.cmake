include(CMakeForceCompiler)

set(CMAKE_SYSTEM_NAME Generic)

set(idf_target "esp32c6")
set(idf_path "/home/fercikmate/esp/esp-idf")

set(RISCV_TARGETS "esp32c3" "esp32c6")

if("${idf_target}" IN_LIST RISCV_TARGETS)
    set(CMAKE_SYSTEM_PROCESSOR riscv)
    set(FLAGS "-ffunction-sections -fdata-sections" CACHE STRING "" FORCE)
else()
    set(CMAKE_SYSTEM_PROCESSOR xtensa)
    set(FLAGS "-mlongcalls -ffunction-sections -fdata-sections" CACHE STRING "" FORCE)
endif()

set(CMAKE_CROSSCOMPILING 1)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
set(PLATFORM_NAME "LwIP")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

set(CMAKE_C_COMPILER /home/fercikmate/.espressif/tools/riscv32-esp-elf/esp-15.1.0_20250607/riscv32-esp-elf/bin/riscv32-esp-elf-gcc)
set(CMAKE_CXX_COMPILER /home/fercikmate/.espressif/tools/riscv32-esp-elf/esp-15.1.0_20250607/riscv32-esp-elf/bin/riscv32-esp-elf-g++)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${FLAGS} ${IDF_INCLUDES}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions -fno-rtti ${FLAGS} ${IDF_INCLUDES}")

add_compile_definitions(ESP_PLATFORM LWIP_IPV4 LWIP_IPV6 PLATFORM_NAME_FREERTOS)

include_directories(
        "/home/fercikmate/ftn/osurv/espROSso/esp32try5/build/config"
        ${idf_path}/components/soc/${idf_target}/include
    )
