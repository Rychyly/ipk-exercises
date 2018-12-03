#include <iostream>
#include <vector>
#include "io.hh"
#include "io.cc"

void print(std::vector<double> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }
}

void readvector() {
    print(read_vector());
}

void uniform(int seed, int N, double min, double max) { 
    print(uniform_distribution(seed, N, min, max));
}

void normal(int seed, int N, double avg, double std_dev) {
    print(normal_distribution(seed, N, avg, std_dev));
}

int main(int argc, char** argv) {

    std::cout << std::endl;
    readvector();
    std::cout << std::endl;
    uniform(1, 10, -1, 1);
    std::cout << std::endl;
    normal(1, 10, 0, 1);
    std::cout << std::endl;

    return(0);

}

