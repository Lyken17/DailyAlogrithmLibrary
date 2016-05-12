//
// Created by Lyken Syu on 5/10/16.
//

#include "BigInteger.h"

BigInteger::BigInteger(std::string inString) :sValue(inString) {
    preprocess(sValue);
}

BigInteger::~BigInteger() {

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
        //std::cout << temp << std::endl;
        vecValue.push_back(std::stoi(temp));
    }
}