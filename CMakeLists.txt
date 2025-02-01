cmake_minimum_required(VERSION 3.31.4)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "0e5b6991-d74f-4b3d-a41c-cf096e0b2508")

project(LeetCode LANGUAGES CXX)

set(CMAKE_CXX_MODULE_STD 1)

add_executable(LeetCode src/main.cpp)
add_subdirectory(inc)
target_link_libraries(LeetCode PUBLIC inc)
target_compile_features(LeetCode
  PRIVATE   cxx_std_23
  INTERFACE cxx_std_20)