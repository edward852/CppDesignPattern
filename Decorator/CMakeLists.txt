cmake_minimum_required(VERSION 2.8.4)
project(Decorator)

set(CMAKE_CXX_STANDARD 11)
add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp HouseBlend.cpp Mocha.cpp)
add_executable(Decorator ${SOURCE_FILES})