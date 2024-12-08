#include "randString.hpp"

std::string rand_string() {
    const std::string charset = 
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789";
    
    std::srand(std::time(nullptr));

    int length = std::rand() % (100);

    std::string randomString;
    for (int i = 0; i < length; ++i) {
        randomString += charset[std::rand() % charset.size()];
    }

    return randomString;
}