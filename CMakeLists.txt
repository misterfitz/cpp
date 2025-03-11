cmake_minimum_required(VERSION 3.30)
project(ProgrammingPrinciplesPractice)

set(CMAKE_CXX_STANDARD 20)

add_executable(ProgrammingPrinciplesPractice src/main.cpp
        src/chapters.h
        src/chapter_01.cpp
        src/chapter_02.cpp
        src/chapter_03.cpp
        src/chapter_04.cpp)
