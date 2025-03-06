cmake_minimum_required(VERSION 3.30)
project(ProgrammingPrinciplesPractice)

set(CMAKE_CXX_STANDARD 20)

add_executable(ProgrammingPrinciplesPractice main.cpp
        chapter_01.cpp
        chapters.h
        chapter_02.cpp
        chapter_03.cpp)

include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
        GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
        GIT_TAG v5.0.0 # Important: Specify a version or a commit hash here.
)
FetchContent_MakeAvailable(ftxui)

project(ftxui-starter LANGUAGES CXX VERSION 1.0.0)
add_executable(ftxui-starter main.cpp)
target_link_libraries(ftxui-starter
        PRIVATE ftxui::screen
        PRIVATE ftxui::dom
        PRIVATE ftxui::component # Not needed for this example.
)
