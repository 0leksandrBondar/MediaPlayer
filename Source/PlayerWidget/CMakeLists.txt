cmake_minimum_required(VERSION 3.14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(LIBRARY PlayerWidget)

add_library(${LIBRARY} playerwidget.h playerwidget.cpp)

target_link_libraries(${LIBRARY} PUBLIC
        Qt
)

target_include_directories(${LIBRARY} PUBLIC ./)