cmake_minimum_required(VERSION 2.8.4)
project(Factory)

set(CMAKE_CXX_STANDARD 11)
add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp NYStyleCheesePizza.cpp ChicagoStyleCheesePizza.cpp NYStylePizzaStore.cpp ChicagoStylePizzaStore.cpp)
add_executable(Factory ${SOURCE_FILES})