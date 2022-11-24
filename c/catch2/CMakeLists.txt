cmake_minimum_required(VERSION 3.10)

project(coding-problem)

# Catch2 setup
add_subdirectory(Catch2)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/Catch2/contrib")
include(CTest)
include(Catch)

# let catch2 discover the unit tests
add_executable(tests solution.h solution.c tests.cc)
target_link_libraries(tests PRIVATE Catch2::Catch2)
catch_discover_tests(tests)