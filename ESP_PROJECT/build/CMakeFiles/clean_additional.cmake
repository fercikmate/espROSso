# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "bootloader/bootloader.bin"
  "bootloader/bootloader.elf"
  "bootloader/bootloader.map"
  "config/sdkconfig.cmake"
  "config/sdkconfig.h"
  "esp-idf/mbedtls/x509_crt_bundle"
  "esp32try5.bin"
  "esp32try5.map"
  "flash_app_args"
  "flash_bootloader_args"
  "flash_project_args"
  "flasher_args.json"
  "flasher_args.json.in"
  "ldgen_libraries"
  "ldgen_libraries.in"
  "project_elf_src_esp32c6.c"
  "x509_crt_bundle.S"
  "../components/micro_ros_espidf_component/esp32_toolchain.cmake"
  "../components/micro_ros_espidf_component/include"
  "../components/micro_ros_espidf_component/micro_ros_dev"
  "../components/micro_ros_espidf_component/micro_ros_src"
  )
endif()
