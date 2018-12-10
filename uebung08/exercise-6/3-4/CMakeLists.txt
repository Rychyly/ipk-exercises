cmake_minimum_required(VERSION 3.5)

project(3-4 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(letterfrequencies letterfrequencies.cc)
add_executable(wordfrequencies wordfrequencies.cc sanitizeword.cc)
add_executable(wordfrequencies_unordered wordfrequencies_unordered.cc sanitizeword.cc)
