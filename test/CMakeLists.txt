cmake_minimum_required(VERSION 3.14)

set(This palindromenumbertest)
set(Sources palindromenumbertest.cc)


add_executable(testtarget ${Sources})
target_link_libraries(testtarget PUBLIC primarytarget GTest::gtest_main)
add_test(NAME ${This} COMMAND ${This})

include(GoogleTest)
gtest_discover_tests(testtarget)