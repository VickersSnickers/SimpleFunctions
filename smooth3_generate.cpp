#include <set>
#include <vector>
#include <cmath>

std::vector<int> smooth3vec_generate(int N){
    std::set<int> a;
    for (int p = 0; p < sqrt(N); p++) {
        for (int q = 0; q < sqrt(N); q++) {
            a.insert(pow(2, p) * pow(3, q));
        }
    }
    std::vector<int> v(a.begin(), a.end());
    return v;
};

void smooth3arr_generate(int* arr, int size){
    std::set<int> a;
    for (int p = 0; p < sqrt(size); p++) {
        for (int q = 0; q < sqrt(size); q++) {
            a.insert(pow(2, p) * pow(3, q));
        }
    }
    std::vector<int> v(a.begin(), a.end());
    copy(v.begin(),v.end(), arr);
};
