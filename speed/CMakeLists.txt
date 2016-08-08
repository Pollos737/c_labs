cmake_minimum_required(VERSION 3.5)
project(speed)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES speed.c)
add_executable(speed ${SOURCE_FILES})