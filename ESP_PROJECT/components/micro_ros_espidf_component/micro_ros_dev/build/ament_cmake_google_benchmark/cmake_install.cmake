# Install script for directory: /home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/src/ament_cmake/ament_cmake_google_benchmark

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/install/ament_cmake_google_benchmark")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark/environment" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark/environment" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/site-packages/ament_cmake_google_benchmark-2.7.3-py3.10.egg-info" TYPE DIRECTORY FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_python/ament_cmake_google_benchmark/ament_cmake_google_benchmark.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/site-packages/ament_cmake_google_benchmark" TYPE DIRECTORY FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/src/ament_cmake/ament_cmake_google_benchmark/ament_cmake_google_benchmark/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/home/fercikmate/.espressif/python_env/idf6.0_py3.10_env/bin/python3" "-m" "compileall"
        "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/install/ament_cmake_google_benchmark/lib/python3.10/site-packages/ament_cmake_google_benchmark"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ament_cmake_google_benchmark")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ament_cmake_google_benchmark")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark/environment" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark/environment" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark/environment" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark/environment" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_index/share/ament_index/resource_index/packages/ament_cmake_google_benchmark")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark/cmake" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/src/ament_cmake/ament_cmake_google_benchmark/ament_cmake_google_benchmark-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark/cmake" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark/cmake" TYPE FILE FILES
    "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_core/ament_cmake_google_benchmarkConfig.cmake"
    "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/ament_cmake_core/ament_cmake_google_benchmarkConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark" TYPE FILE FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/src/ament_cmake/ament_cmake_google_benchmark/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_cmake_google_benchmark" TYPE DIRECTORY FILES "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/src/ament_cmake/ament_cmake_google_benchmark/cmake")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/fercikmate/ftn/osurv/espROSso/esp32try5/components/micro_ros_espidf_component/micro_ros_dev/build/ament_cmake_google_benchmark/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
