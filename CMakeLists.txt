enable_testing()
find_package(GTest REQUIRED)

add_executable((my_tests test_file.cpp))
target_link_libraries(my_tests GTest::Gtest GTest::Main)
