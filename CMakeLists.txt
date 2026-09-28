cmake_minimum_required(VERSION 3.22)

# Setup compiler settings
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

# Define the build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

# Set the project name
set(CMAKE_PROJECT_NAME embedded_abstractions)

project(embedded_abstractions)

set(SRC_DIR src)
set(INC_DIR src)

add_library(hardware_abstractions STATIC
    ${SRC_DIR}/abst_gpio.c
    ${SRC_DIR}/abst_i2c.c
    ${SRC_DIR}/abst_spi.c
    ${SRC_DIR}/abst_adc.c
)

target_include_directories(hardware_abstractions PRIVATE
    ${INC_DIR}
)