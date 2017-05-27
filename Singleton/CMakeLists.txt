cmake_minimum_required(VERSION 3.1.0)
project(Singleton)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(SOURCE_FILES main.cpp SingletonEagerRef.cpp SingletonEagerPrt.cpp SingletonLazyRef.cpp SingletonLazyPtr.cpp)
add_executable(Singleton ${SOURCE_FILES})
