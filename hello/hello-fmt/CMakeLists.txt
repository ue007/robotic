cmake_minimum_required(VERSION 3.1)

project(hellofmt)

find_package(fmt)

add_executable(hellofmt main.cpp)

target_link_libraries(hellofmt fmt::fmt)