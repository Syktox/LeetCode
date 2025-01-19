cmake_minimum_required(VERSION 3.31.4)
project(LeetCode)


add_executable(LeetCode src/main.cpp)
add_subdirectory(include)
target_link_libraries(LeetCode PUBLIC include)