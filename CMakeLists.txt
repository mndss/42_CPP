cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 98)

project(testsCpp VERSION 1.0)

add_subdirectory(googletest)

# file(GLOB_RECURSE CPP_FILES ${CMAKE_CURRENT_SOURCE_DIR}/ex01/*.cpp)

add_executable(
	test
	tests.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ex01/Contact.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ex01/PhoneBook.cpp
)
	
target_link_libraries(
	test
	gtest_main
)

target_include_directories(test PUBLIC 
${CMAKE_CURRENT_SOURCE_DIR}/googletest
${CMAKE_CURRENT_SOURCE_DIR}/ex01
)

include(GoogleTest)

gtest_discover_tests(test)
