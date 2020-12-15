cmake_minimum_required(VERSION 3.14)
project(lab1)

set(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)
enable_testing()
include_directories(googletest/include/gtest)

add_executable(lab1 Trit.cpp Trit.h TritSet.cpp TritSet.h tests.cpp)
target_link_libraries(lab1 gtest gtest_main)
add_test(lab1 lab1)
