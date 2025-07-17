cmake_minimum_required(VERSION 3.10)

project(Boson C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)

include_directories(src)

file(GLOB_RECURSE SOURCES
    src/core/*.c
    src/modules/*.c
    src/*.c
    main.c
)

add_executable(${PROJECT_NAME} ${SOURCES})