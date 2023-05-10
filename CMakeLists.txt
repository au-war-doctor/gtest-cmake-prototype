cmake_minimum_required(VERSION 3.26)
project(c_unit_testing_sandbox)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)

enable_testing()

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib)


