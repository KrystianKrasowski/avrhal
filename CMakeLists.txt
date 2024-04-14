cmake_minimum_required(VERSION 3.27)

project(avrhal VERSION 3.2.0 LANGUAGES C)

set(DIRECTORIES
    './include'
)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE ${DIRECTORIES})