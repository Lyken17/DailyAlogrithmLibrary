

#include "BloomFilter.hpp"

#define SELF_DEFINE_STRING "author : lyken"

using namespace std;

BloomFilter::BloomFilter() :  BloomFilter::BloomFilter(5, 30) {

}

BloomFilter::BloomFilter(int hashTimes, int bitvecLength) {
    // cout << "hashTimes :" << hashTimes << " bitvecLength : " << bitvecLength << endl;
    k = hashTimes;
    m = bitvecLength;
    bitVector.resize(bitvecLength);
}

int BloomFilter::insert(string addElement) {
    for (size_t i = 0; i < k; i++) {
        string hashStr = addElement + std::to_string(i);
        size_t hashIndex = hash_fn(hashStr) % m;
        bitVector[hashIndex] = true;
    }
    return 0;
}

bool BloomFilter::query(string checkElement) {
    for (size_t i = 0; i < k; i++) {
        string hashStr = checkElement + std::to_string(i);
        size_t hashIndex = hash_fn(hashStr) % m;
        if(!bitVector[hashIndex])
            return false;
    }
    return true; //possible exist
}
// bool BloomFilter::query(string checkElement, int times) {
//     for (size_t i = 0; i < times; i++) {
//         if (!BloomFilter::query(checkElement))
//             return false;
//     }
//     return true;
// }
