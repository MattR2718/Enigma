cmake_minimum_required(VERSION 3.22.0)

add_library(EnigmaLib plugboard.c)

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} EnigmaLib)