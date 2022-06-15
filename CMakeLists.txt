cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial)

set(CMAKE_CXX_STANDARD 17)
include_directories("sortings/")
# add the executable
set(SRC_LIST sortings/InsertSorting.cpp sortings/MergeSorting.cpp sortings/ServiceFunction.cpp sortings/TestFunction.cpp main.cpp sortings/HeapSorting.h sortings/HeapSorting.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})