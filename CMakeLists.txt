cmake_minimum_required(VERSION 3.10)
project(PacManGame)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()
add_executable(pacman src/main.cpp)
add_executable(tests tests/test_main.cpp)git add -A
add_test(NAME PacManTests COMMAND tests)