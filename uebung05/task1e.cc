#include <iostream>
#include <vector>
#include <cmath>

void print(std::vector<double> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        std::cout << " " << std::endl;
    }
}

void reverse_inplace(std::vector<double>& v) {

    if (v.size() % 2 == 0) {
        for (int i = 0; i < v.size()/2; i++) {
            std::swap(v[i], v[v.size()-i-1]);
        }
    } else {
        for (int i = 0; i < (v.size()-1)/2; i++) {
            std::swap(v[i], v[v.size()-i-1]);
        }
    }
    
}

int main(int argc, char** argv) {

    std::cout << std::endl;

    std::vector<double> v1;
    reverse_inplace(v1);
    print(v1);

    std::cout << std::endl;

    std::vector<double> v2 = {{ 2.4, 1.2, 3.89, 0.1, 0.001, 4.03, -4.5 }};
    reverse_inplace(v2);
    print(v2);

    std::cout << std::endl;

    std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
    reverse_inplace(v3);
    print(v3);

    std::cout << std::endl;

    return(0);

}

