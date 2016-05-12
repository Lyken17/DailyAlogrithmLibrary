cmake_minimum_required(VERSION 3.5)
project(MyLibrary)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BigInteger.cpp BigInteger.h)
add_executable(MyLibrary ${SOURCE_FILES})