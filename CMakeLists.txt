cmake_minimum_required(VERSION 3.14)
project(arithmetic)

set(CMAKE_CXX_STANDARD 14)

add_executable(arithmetic main.cpp SelectSort.cpp SelectSort.h BubbleSort.cpp BubbleSort.h InsertionSort.cpp InsertionSort.h)