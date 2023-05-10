set(BINARY ${CMAKE_PROJECT_NAME})

set (SOURCES palindromenumber.h palindromenumber.cc main.cc)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})