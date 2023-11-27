cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_library(MainWindow mainwindow.cpp mainwindow.h)

target_link_libraries(MainWindow PUBLIC
                      Qt
)

target_include_directories(MainWindow PUBLIC ./)