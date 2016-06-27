#include <iostream>
#include <functional>
#include <string>
#include "BloomFilter.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    BloomFilter f = BloomFilter();
    string s = "123";
    f.insert(s);
    return 0;
}
