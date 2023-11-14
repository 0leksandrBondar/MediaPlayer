cmake_minimum_required(VERSION 3.14)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 COMPONENTS Core REQUIRED)

add_library(Qt6 INTERFACE
        ../Source/App/main.cpp)

target_link_libraries(Qt6 INTERFACE
        Qt6::Core
)