#include <iostream>
#include <string>
#include <bitset>
#include <functional>
#include <vector>

using namespace std;


class BloomFilter{
public:
    BloomFilter() ;
    BloomFilter(int hashTimes, int bitvecLength);

    int insert(string addElement);
    bool query(string checkElement);
    bool query(string checkElement, int times);


    int k, m;
    vector<bool> bitVector;
};


