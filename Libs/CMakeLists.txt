cmake_minimum_required(VERSION 3.14)

add_subdirectory(GoogleTests)

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

add_library(Qt6 INTERFACE)

target_link_libraries(Qt6 INTERFACE
        Qt6::Core
        Qt6::Widgets
)