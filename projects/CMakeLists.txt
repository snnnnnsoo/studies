cmake_minimum_required(VERSION 3.31.6)
project(projects)

enable_testing()

add_subdirectory(libs/googletest)

add_subdirectory(menu)
add_subdirectory(bubble_sort)

