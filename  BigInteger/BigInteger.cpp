//
// Created by Lyken Syu on 5/10/16.
//
#include <algorithm>
#include "BigInteger.h"


BigInteger::BigInteger() { }

BigInteger::BigInteger(std::string inString) :sValue(inString) {
    preprocess(sValue);
}

BigInteger::BigInteger(ll inNumber) : BigInteger(std::to_string(inNumber)) {

}

BigInteger::~BigInteger() {

}

BigInteger BigInteger::add(const BigInteger& bigB) {
    //add two numbers
    BigInteger newBig;
    int i;
    for (i = 0; i < min(vecValue.size(), bigB.vecValue.size()); ++i) {
        newBig.vecValue.push_back(vecValue[i] + bigB.vecValue[i]);
    }

    const std::vector<int> &temp = vecValue.size() <= bigB.vecValue.size() ? vecValue : bigB.vecValue;
    for (; i < temp.size(); ++i) {
        newBig.vecValue.push_back(temp[i]);
    }

    // calculate the carry
    int carry = 0;
    for (auto it = std::begin(newBig.vecValue); it!=std::end(newBig.vecValue); ++it) {
        *it += carry;
        carry = *it / 10000;
        *it = *it % 10000;

        auto next = it + 1;
        if (next == std::end(newBig.vecValue) && carry != 0) {
            newBig.vecValue.push_back(carry);
            carry = 0;
        }
    }

    return newBig;
}

void BigInteger::preprocess(std::string revS) {
    std::reverse(revS.begin(), revS.end());

    for (int i = 0; i < revS.length() ; i += 4) {
        std::string temp;
        for (int j = 0; j < 4; ++j) {
            if (i + j < revS.length()) {
                temp += revS[i + j];
            }
        }
        std::reverse(temp.begin(), temp.end());
        vecValue.push_back(std::stoi(temp));
    }

//    for (auto each : vecValue)
//        std::cout << each << " ";
//    std::cout << endl;
////    for (int i = 0; i < vecValue.size() ; i += 1) {
//    for (int i = vecValue.size() - 1; i >= 0; i -= 1) {
//        std::cout << vecValue[i] << " ";
//    }
//    std::cout << endl;
}
