#include <iostream>
#include <functional>
#include <string>
#include "BloomFilter.h"

using namespace std;

int main_main(int argc, char const *argv[]) {
    BloomFilter f;
    string s = "123";
    f.insert(s);
    return 0;
}



int main()
{
    std::string str = "Meet the new boss...123";
    std::hash<std::string> hash_fn;
    size_t str_hash = hash_fn(str);

    std::cout << str_hash << '\n';
}
