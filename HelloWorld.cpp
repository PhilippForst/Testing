//
// Created by lnzphi07 on 03.04.2024.
//

#include "HelloWorld.h"

std::vector<unsigned char> HelloWorld::stringToBytes(const std::string &str) {
    return std::vector<unsigned char>(str.begin(), str.end());
}

std::vector<unsigned char> HelloWorld::calculateHash(const std::vector<unsigned char> &data) {
    std::vector<unsigned char> hash(SHA256_DIGEST_LENGTH);
    SHA256(data.data(), data.size(), hash.data());
    return hash;
}

std::string HelloWorld::hashToHex(const std::vector<unsigned char> &hash) {
    std::string hexStr;
    char buf[3];
    for (const auto &byte: hash) {
        sprintf(buf, "%02x", byte);
        hexStr.append(buf);
    }
    return hexStr;
}
