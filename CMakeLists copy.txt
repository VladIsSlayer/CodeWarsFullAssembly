cmake_minimum_required(VERSION 3.30)

set(VCPKG_TARGET_TRIPLET x64-windows)
include("C:\\lib\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")

project(gtest_program)

add_executable(program 
    src/main.cpp 
    src/functions.cpp 
    include/functions.hpp)
    
include_directories(include)

enable_testing()
find_package(GTest CONFIG REQUIRED)

add_executable(gtest_program test/tests.cpp src/functions.cpp include/functions.hpp)
target_link_libraries(gtest_program PRIVATE GTest::gtest GTest::gtest_main)

add_test(NAME all_tests COMMAND gtest_program)