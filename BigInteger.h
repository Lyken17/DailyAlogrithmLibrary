//
// Created by Lyken Syu on 5/10/16.
//

#ifndef MYLIBRARY_BIGINTEGER_H
#define MYLIBRARY_BIGINTEGER_H
#include <iostream>
#include <vector>

using namespace std;


class BigInteger {
public:
    std::vector<int> vecValue; //vector that stored preprocessed big integer

    BigInteger();
    BigInteger(std::string inString);
    ~BigInteger();

    BigInteger add(const BigInteger& bigB) {
        BigInteger newBig;
        int i;
        for (i = 0; i < min(vecValue.size(), bigB.vecValue.size()); ++i) {
            newBig.vecValue.push_back(vecValue[i] + bigB.vecValue[i]);
        }

        const std::vector<int> &temp = vecValue.size() <= bigB.vecValue.size() ? vecValue : bigB.vecValue;

        for (; i < temp.size(); ++i) {
            newBig.vecValue.push_back(temp[i]);
        }
        return newBig;
    }
    void show_vector() {
        for (auto i : vecValue)
            std::cout << i << " ";
        std::cout << std::endl;
    }


private:
    std::string sValue; //string stores the big integer

    void preprocess(std::string revS);

};



#endif //MYLIBRARY_BIGINTEGER_H
