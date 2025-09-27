# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/esp32_toolchain.cmake"
  "bootloader/bootloader.bin"
  "bootloader/bootloader.elf"
  "bootloader/bootloader.map"
  "config/sdkconfig.cmake"
  "config/sdkconfig.h"
  "esp-idf/mbedtls/x509_crt_bundle"
  "flash_app_args"
  "flash_bootloader_args"
  "flash_project_args"
  "flasher_args.json"
  "flasher_args.json.in"
  "ldgen_libraries"
  "ldgen_libraries.in"
  "ping_pong.bin"
  "ping_pong.map"
  "project_elf_src_esp32c6.c"
  "x509_crt_bundle.S"
  "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/include"
  "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev"
  "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_src"
  )
endif()
