cmake_minimum_required(VERSION 3.5)

project(1-2 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

add_library(vectors io.cc statistics)

add_executable(readvector readvector.cc)
add_executable(uniform uniform.cc)
add_executable(normal normal.cc)

target_link_libraries(readvector PUBLIC vectors)
target_link_libraries(uniform PUBLIC vectors)
target_link_libraries(normal PUBLIC vectors)
