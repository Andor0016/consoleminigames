cmake_minimum_required(VERSION 3.27)
project(consoleminigames)

set(CMAKE_CXX_STANDARD 14)

add_executable(consoleminigames
        main.cpp
        common/common.cpp
        screen/screen.cpp
        mastermind/mastermind.cpp
        rockpapperscissor/rockpapperscissor.cpp)
