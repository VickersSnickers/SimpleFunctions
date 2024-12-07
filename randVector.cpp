#include <random>
#include <iostream>
#include <vector>

void rand_vector(std::vector<int>& v, int size, double max){
    std::mt19937 mt(time(nullptr));
    for (int i = 0; i < size; ++i)
        v[i] = (mt() % (int)max);
};