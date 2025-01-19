cmake_minimum_required(VERSION 3.31.4)

add_library(inc Functions.cpp)

target_include_directories(LeetCode PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/inc"
                          )
