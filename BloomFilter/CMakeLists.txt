cmake_minimum_required (VERSION 2.6)
project (BloomFilter)
add_executable(BloomFilter main.cpp BloomFilter.cpp)
target_compile_features(BloomFilter PRIVATE cxx_range_for)
