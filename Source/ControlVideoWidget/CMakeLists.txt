cmake_minimum_required(VERSION 3.14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(LIBRARY ControlVideoWidget)

add_library(${LIBRARY} controlvideowidget.cpp controlvideowidget.h)

target_link_libraries(${LIBRARY} PUBLIC
        Qt
)

target_include_directories(${LIBRARY} PUBLIC ./)