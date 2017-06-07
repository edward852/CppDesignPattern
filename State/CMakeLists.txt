cmake_minimum_required(VERSION 3.8)
project(State)

set(CMAKE_CXX_STANDARD 11)

AUX_SOURCE_DIRECTORY(. SOURCE_FILES)
add_executable(State ${SOURCE_FILES})