cmake_minimum_required(VERSION 3.8)
project(Composite)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -rdynamic -fdump-class-hierarchy")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")
#set(CMAKE_VERBOSE_MAKEFILE on)

AUX_SOURCE_DIRECTORY(. SOURCE_FILES)
#set(SOURCE_FILES main.cpp MenuItem.cpp Menu.cpp CompositeIterator.cpp MenuIterator.cpp)
add_executable(Composite ${SOURCE_FILES})