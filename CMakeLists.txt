cmake_minimum_required(VERSION 3.0.0)
project(test_suite)

set(CMAKE_CXX_STANDARD 11)

link_directories(${PROJECT_SOURCE_DIR}/lib)
include_directories(include)

add_executable(largest_int_div_by_primes_bin main_largest_int_div_by_primes.cpp)
target_link_libraries(largest_int_div_by_primes_bin largest_int_div_by_primes)

add_executable(triangle_containment_bin main_triangle_containment.cpp)
target_link_libraries(triangle_containment_bin triangle_containment)