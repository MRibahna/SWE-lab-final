cmake_minimum_required(VERSION 3.10)
project(project-name)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_executable(factory factory.cpp)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

find_package(GTest REQUIRED)
add_executable(factory_test tests/factory_test.cpp)
target_link_libraries(factory_test gtest gtest_main)
add_test(NAME factory_test COMMAND factory_test)