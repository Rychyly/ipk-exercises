#include <iostream>
#include <vector>
#include "io.hh"
#include "io.cc"
#include "statistics.hh"
#include "statistics.cc"

int main(int argc, char** argv) {

    std::cout << std::endl;
    std::vector<double> v = uniform_distribution(42, 10, -1, 1);
    std::cout << std::endl;
    std::cout << "Mean:               " << mean(v) << std::endl;
    std::cout << "Median:             " << median(v) << std::endl;
    std::cout << "First moment:       " << moment(v, 1) << std::endl;
    std::cout << "Fourth moment:      " << moment(v, 4) << std::endl;
    std::cout << "Standard deviation: " << standard_deviation(v) << std::endl;
    std::cout << std::endl;

    return(0);

}

