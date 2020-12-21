cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(lab2)

add_executable(lab2 main.cpp WorkflowParser.cpp Grep.cpp ReadFile.cpp Replace.cpp Sort.cpp WriteFile.cpp)
