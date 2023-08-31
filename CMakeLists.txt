cmake_minimum_required(VERSION 3.22)
project(physics)

# Включение Google Test
enable_testing()
find_package(GTest REQUIRED)

# Добавление тестов
add_executable(my_tests test_file.cpp)
target_link_libraries(my_tests GTest::gtest GTest::Main)
