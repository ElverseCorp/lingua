cmake_minimum_required(VERSION 3.10)
project(Lingua)

set(CMAKE_C_STANDARD 11)

add_library(lingua STATIC)
target_include_directories(lingua PUBLIC
    ../../cross/include
    include
)

file(GLOB_RECURSE LINGUA_SRC "src/*.c")
target_sources(lingua PRIVATE ${LINGUA_SRC})