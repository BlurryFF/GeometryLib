cmake_minimum_required(VERSION 3.23)
project(GeometryLib)

set(CMAKE_CXX_STANDARD 14)

add_library(GeometryLib Circle.cpp Triangle.cpp Triangle.h constants.h GeometryLib.h Figure.h)
