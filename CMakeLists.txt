cmake_minimum_required(VERSION 3.14)

project(MediaPlayer)

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_subdirectory(Source)
add_subdirectory(Libs)
