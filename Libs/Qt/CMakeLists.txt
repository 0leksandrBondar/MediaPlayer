cmake_minimum_required(VERSION 3.14)

find_package(Qt6 COMPONENTS Core Widgets Multimedia MultimediaWidgets Gui REQUIRED)

add_library(Qt INTERFACE)

target_link_libraries(Qt INTERFACE
    Qt6::Core
    Qt6::Widgets
    Qt6::Multimedia
    Qt6::MultimediaWidgets
    Qt6::Gui)