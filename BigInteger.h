//
// Created by Lyken Syu on 5/10/16.
//

#ifndef MYLIBRARY_BIGINTEGER_H
#define MYLIBRARY_BIGINTEGER_H
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

class BigInteger {
public:
    std::vector<int> vecValue; //vector that stored preprocessed big integer

    BigInteger() ;
    BigInteger(std::string inString);
    BigInteger(ll inNumber);

    ~BigInteger();

    BigInteger add(const BigInteger& bigB);

    BigInteger operator +(const BigInteger& bigB) {
        return this->add(bigB);
    }




    void show_vector() {
        for (int i = int(vecValue.size()) - 1; i >= 0; i -= 1) {
            std::cout << vecValue[i] << " ";
        }
        std::cout << std::endl;
    }


private:
    std::string sValue; //string stores the big integer

    void preprocess(std::string revS);

};



#endif //MYLIBRARY_BIGINTEGER_H
