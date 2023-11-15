cmake_minimum_required(VERSION 3.14)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(MainWindow mainwindow.cpp mainwindow.h)

target_link_libraries(MainWindow PUBLIC
                      Qt6
)

target_include_directories(MainWindow PUBLIC ./)