cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(Tests)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(SOURCES main_test.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

set(BINARY_NAME tests${CMAKE_PROJECT_NAME})
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_test(NAME ${BINARY_NAME} COMMAND ${BINARY_NAME})

target_link_libraries(Tests
    GTest::gtest
    GTest::gmock
    Qt6)

include_directories(${CMAKE_SOURCE_DIR}/Source)