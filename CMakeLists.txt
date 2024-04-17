cmake_minimum_required(VERSION 3.27)

project(avrhal VERSION 3.2.0 LANGUAGES C)

add_subdirectory(include/atmega88pa)
add_subdirectory(include/avrhal)

add_library(${PROJECT_NAME} INTERFACE)
target_link_libraries(${PROJECT_NAME} INTERFACE libavrhal)
target_include_directories(${PROJECT_NAME} INTERFACE include)