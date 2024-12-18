cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled recipe.cpp
        food.h
        food.cpp
        recipe.h)
