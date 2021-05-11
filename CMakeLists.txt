cmake_minimum_required(VERSION 3.19)
project(adventure)

set(CMAKE_CXX_STANDARD 14)

include_directories(headers)
add_executable(adventure src/main.cpp headers/item.h headers/worldentity.h)