cmake_minimum_required(VERSION 3.5)
add_subdirectory(./lib/googletest/)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCE_FILES runAllTests.cpp PizzaTest.cpp)
add_executable(runPizzaTests ${SOURCE_FILES})
target_link_libraries(runPizzaTests gtest gtest_main core)