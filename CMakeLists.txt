cmake_minimum_required(VERSION 3.10)
project(HW09)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(HW09
        garbage.c
        garbage.h
        garbage.png
        main.c
        Makefile
        myLib.h engine.c)
