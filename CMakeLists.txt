cmake_minimum_required(VERSION 3.23)
project(GeometryLib)

set(CMAKE_CXX_STANDARD 14)


include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.7.0
)

FetchContent_MakeAvailable(Catch2)


add_library(GeometryLib Circle.cpp Triangle.cpp Triangle.h constants.h GeometryLib.h Figure.h)

add_executable(GeometryLibTests tests/Triangle_test.cpp tests/Circle_test.cpp)

target_include_directories(GeometryLibTests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/tests)

target_link_libraries(GeometryLibTests PRIVATE GeometryLib Catch2::Catch2WithMain)

enable_testing()
add_test(NAME GeometryLibTests COMMAND GeometryLibTests)
