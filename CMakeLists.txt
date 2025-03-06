cmake_minimum_required(VERSION 3.30)
project(ProgrammingPrinciplesPractice)

# Fix behavior of CMAKE_CXX_STANDARD when targeting macOS.
if (POLICY CMP0025)
    cmake_policy(SET CMP0025 NEW)
endif ()


set(CMAKE_CXX_STANDARD 20)

add_executable(ProgrammingPrinciplesPractice main.cpp
        chapter_01.cpp
        chapters.h
        chapter_02.cpp
        chapter_03.cpp)
