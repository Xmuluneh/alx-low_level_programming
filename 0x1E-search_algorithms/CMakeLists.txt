cmake_minimum_required(VERSION 3.23)
project(0x1E_search_algorithms C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(0x1E_search_algorithms
        0-linear.c
        0-main.c
        search_algos.h)
