cmake_minimum_required(VERSION 3.10)

project(PacManGame)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()

add_library(pacman_lib
    src/PacMan.cpp
    src/Maze.cpp
    src/Ghost.cpp
    src/Game.cpp
)

add_executable(pacman
    src/main.cpp
)

target_link_libraries(pacman pacman_lib)

add_executable(pacman_tests
    tests/test_main.cpp
)

target_link_libraries(pacman_tests pacman_lib)

add_test(NAME PacManTests COMMAND pacman_tests)