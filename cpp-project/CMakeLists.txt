cmake_minimum_required (VERSION 2.6)
project (bissex)
add_executable(bissex src/Exercises/bissex.h src/Exercises/test_bissex.cpp)

# Includes Catch in the project:
add_subdirectory(catch)
include_directories(${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})
enable_testing(true)  # Enables unit-testing.

add_dependencies(test_bissex catch)

add_test(bissex ./test_bissex [factorial])
