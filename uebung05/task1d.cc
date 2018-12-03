#include <iostream>
#include <vector>
#include <cmath>

void print(std::vector<double> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        std::cout << " " << std::endl;
    }
}

void round(std::vector<double>& v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] = std::round(v[i]);
    }
}

int main(int argc, char** argv) {

    std::cout << std::endl;

    std::vector<double> v1;
    round(v1);
    print(v1);

    std::cout << std::endl;

    std::vector<double> v2 = {{ 2.4, 1.2, 3.89, 0.1, 0.001, 4.03, -4.5 }};
    round(v2);
    print(v2);

    std::cout << std::endl;

    std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
    round(v3);
    print(v3);

    std::cout << std::endl;

    return(0);

}

