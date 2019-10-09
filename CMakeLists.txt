cmake_minimum_required(VERSION 3.15)
project(class11 C)

set(CMAKE_C_STANDARD 11)
set (CMAKE_CXX_FLAGS "-Og")

add_executable(class11
        src/sumstore.c)
