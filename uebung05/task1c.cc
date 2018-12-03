#include <iostream>
#include <vector>

void print(std::vector<double> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        std::cout << " " << std::endl;
    }
}

std::vector<double> reversed(std::vector<double> v) {

    std::vector<double> res(v.size());

    for (int i = 0; i < v.size(); i++) {
        res[i] = v[v.size() - i - 1];
    }

    return(res);

}

int main(int argc, char** argv) {

    std::cout << std::endl;

    std::vector<double> v1;
    print(reversed(v1));

    std::cout << std::endl;

    std::vector<double> v2(10);
    print(reversed(v2));

    std::cout << std::endl;

    std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
    print(reversed(v3));

    std::cout << std::endl;

    return(0);

}

