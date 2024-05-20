project(tests)

add_executable(${PROJECT_NAME} my_class_test.cc)

target_link_libraries(${PROJECT_NAME} GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})