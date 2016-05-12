#include <iostream>
#include <fstream>
#include <vector>


#include "BigInteger.h"

using namespace std;

int main() {
    string inA, inB, temp;
    std::ifstream file("/Users/lykensyu/ClionProjects/MyLibrary/data.txt");

    file >> inA >> inB;
    //cout << inA << endl;


    //cout << inA << endl;

    BigInteger bigA(inA);
    bigA.show_vector();
    BigInteger bigB(inB);
    bigB.show_vector();


    return 0;
}