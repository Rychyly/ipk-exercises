#include <iostream>

namespace power {

    int iterative(int q, int n) {

        if (n < 0) {
            std::cout << "Error: n is negative." << std::endl;
            return(0);
        }

        int prod = 1;
        for (int i = 0; i < n; i++) {
            prod *= q;
        }
        return(prod);

    }

    int recursive(int q, int n) {

        if (n < 0) {
            std::cout << "Error: n is negative." << std::endl;
            return(0);
        }

        if (n == 0) {
            return(1);
        } else {
            return(recursive(q, n-1) * q);
        }

    }

    int fast_recursive(int q, int n) {

        if (n < 0) {
            std::cout << "Error: n is negative." << std::endl;
            return(0);
        }

        if (n == 0) {
            return(1);
        } else if (n%2 == 0) {
            int sqrt = fast_recursive(q, n/2);
            return(sqrt * sqrt);
        } else {
            return(fast_recursive(q, n-1) * q);
        }

    }

} // end namespace power

int main(int argc, char** argv) {

    int q;
    int n;
    std::cout << std::endl;
    std::cout << "Bitte geben Sie q ein: ";
    std::cin >> q;
    std::cout << "Bitte geben Sie n ein: ";
    std::cin >> n;
    std::cout << std::endl;
    
    std::cout << "iterative: " << power::iterative(q, n) << std::endl;
    std::cout << "recursive: " << power::recursive(q, n) << std::endl;
    std::cout << "fast_recursive: " << power::fast_recursive(q, n) << std::endl;

}

