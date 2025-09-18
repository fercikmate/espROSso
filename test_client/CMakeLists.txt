cmake_minimum_required(VERSION 3.5)
project(test_client C)

find_package(ament_cmake REQUIRED)
find_package(rcl REQUIRED)
find_package(rclc REQUIRED)
find_package(geometry_msgs REQUIRED)

add_executable(test_client src/test.c)

ament_target_dependencies(test_client rcl rclc geometry_msgs)

install(TARGETS test_client
  DESTINATION lib/${PROJECT_NAME})

ament_package()