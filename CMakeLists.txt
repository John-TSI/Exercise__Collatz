cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Collatz VERSION 1.0.0)

include_directories(include)

add_executable(${PROJECT_NAME} src/main.cpp src/collatz.cpp)
