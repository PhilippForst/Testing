//
// Created by lnzphi07 on 03.04.2024.
//

#include <vector>
#include <iostream>
#include <string>
#include <openssl/sha.h>
#include "HelloWorld.h"

int main()

{


    for (;;) break;


    printf("Hello world!\n");

    std::string data = "Hello, World!";
    auto helloWorld = new HelloWorld();
    auto bytes = helloWorld->stringToBytes(data);
    auto hash = helloWorld->calculateHash(bytes);
    auto hexStr = helloWorld->hashToHex(hash);
        std::cout << "Hash of '" << data << "' is: " << hexStr << std::endl;

    return 0;


    auto h = new HelloWorld();


}
