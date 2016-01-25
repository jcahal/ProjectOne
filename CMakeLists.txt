cmake_minimum_required(VERSION 3.3)
project(ProjectOne)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp TeamStats.cpp TeamStats.h)
add_executable(ProjectOne ${SOURCE_FILES})