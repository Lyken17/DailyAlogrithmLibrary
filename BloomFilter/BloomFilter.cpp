#include <iostream>

#include "BloomFilter.h"

using namespace std;

BloomFilter::BloomFilter() {
    BloomFilter(5, 30);
}

BloomFilter::BloomFilter(int hashTimes, int bitvecLength) : k{hashTimes}, m{bitvecLength} {
    bitVector.resize(bitvecLength);
}

int BloomFilter::insert(string addElement) {
    std::hash<std::string> hash_fn;
    for (size_t i = 0; i < k; i++) {
        size_t str_hash = hash_fn(addElement);
    }
}
