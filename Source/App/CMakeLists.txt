cmake_minimum_required(VERSION 3.14)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(SOURCE
    main.cpp)

set(HEADERS )

add_executable(${PROJECT_NAME} ${SOURCE} ${HEADERS})

target_link_libraries(${PROJECT_NAME}
        MainWindow
)