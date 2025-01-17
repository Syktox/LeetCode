cmake_minimum_required(VERSION 3.10.0)

project(LeetCode VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include())

file(GLOB SOURCES 
    "include/*.h"
    "src/*.cpp"
    )

add_executable(LeetCode ${SOURCES})