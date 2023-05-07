cmake_minimum_required(VERSION 3.14)
set(This c_unit_testing_sandbox)
project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

set(
    Headers 
    palindromenumber.h
)
set (
    Sources
    palindromenumber.cc
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)
