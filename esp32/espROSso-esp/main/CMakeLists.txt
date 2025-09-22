idf_component_register(SRCS "main.c"
                       PRIV_REQUIRES spi_flash micro_ros_espidf_component esp_driver_ledc esp_driver_uart esp_driver_gpio
                       INCLUDE_DIRS "")
