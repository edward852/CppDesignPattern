cmake_minimum_required(VERSION 3.8)
project(Iterator)

set(CMAKE_CXX_STANDARD 17)

aux_source_directory(. SOURCE_FILES)
add_executable(Iterator ${SOURCE_FILES})