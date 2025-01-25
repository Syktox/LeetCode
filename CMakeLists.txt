cmake_minimum_required(VERSION 3.31.4)
project(LeetCode)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LeetCode src/main.cpp)
add_subdirectory(inc)
target_link_libraries(LeetCode PUBLIC inc)