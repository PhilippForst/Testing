//
// Created by lnzphi07 on 03.04.2024.
//

#ifndef TESTING_HELLOWORLD_H
#define TESTING_HELLOWORLD_H

#include <iostream>
#include <string>
#include <vector>
#include <openssl/sha.h>

class HelloWorld {
public:
    std::vector<unsigned char> stringToBytes(std::string &str);
    std::vector<unsigned char> calculateHash(std::vector<unsigned char> &data);
    std::string hashToHex(std::vector<unsigned char> &hash);
};


#endif //TESTING_HELLOWORLD_H
