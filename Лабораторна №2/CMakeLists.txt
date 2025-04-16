cmake_minimum_required(VERSION 3.10)
project(TriangleChecker)

set(CMAKE_CXX_STANDARD 17)

add_executable(triangle_checker
        ConsoleApplication/main.cpp
        ConsoleApplication/triangle.cpp
)
