cmake_minimum_required(VERSION 3.1.0)
project(Command)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Light.cpp Airconditioner.cpp RemoteControl.cpp)
add_executable(Command ${SOURCE_FILES})