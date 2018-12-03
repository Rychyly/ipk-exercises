#include <iostream>
#include <vector>

void print(std::vector<double> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        std::cout << " " << std::endl;
    }
}

int main(int argc, char** argv) {

    std::cout << std::endl;

    std::vector<double> v1;
    print(v1);

    std::cout << std::endl;

    std::vector<double> v2(10);
    print(v2);

    std::cout << std::endl;

    std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
    print(v3);
    
    std::cout << std::endl;

    return(0);

}
