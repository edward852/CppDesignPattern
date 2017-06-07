cmake_minimum_required(VERSION 3.8)
project(TemplateMethod)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CoffeeWithHook.cpp)
add_executable(TemplateMethod ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(TemplateMethod libboost_locale.so)