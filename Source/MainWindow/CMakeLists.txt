cmake_minimum_required(VERSION 3.14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(LIBRARY MainWindow)

add_library(${LIBRARY} mainwindow.cpp mainwindow.h)

target_link_libraries(${LIBRARY} PUBLIC
        Qt
        SettingsWidget
        PlayerWidget
        ControlVideoWidget
)

target_include_directories(${LIBRARY} PUBLIC ./)