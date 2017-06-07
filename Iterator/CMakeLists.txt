cmake_minimum_required(VERSION 3.8)
project(Iterator)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MenuItem.cpp DinnerMenuIterator.cpp DinnerMenu.cpp LunchMenu.cpp LunchMenuIterator.cpp)
add_executable(Iterator ${SOURCE_FILES})