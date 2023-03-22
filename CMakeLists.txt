cmake_minimum_required(VERSION 3.24)
project(GameOfLife)

set(CMAKE_CXX_STANDARD 17)

add_executable(GameOfLife Gra.cpp Gra.h GraAPI.cpp GraAPI.h GraTxt.cpp GraTxt.h Silnik.cpp Silnik.h Tablica.cpp Tablica.h)
