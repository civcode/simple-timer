cmake_minimum_required(VERSION 3.0.0)

project(timer)

include_directories (
    ${CMAKE_SOURCE_DIR}/include
)

set(simple_timer_SRC
    ${CMAKE_SOURCE_DIR}/src/simple_timer.cpp
)

add_library(simple_timer src/simple_timer.cpp)

add_executable(timer_example example/timer_example.cpp)
target_link_libraries(timer_example simple_timer)