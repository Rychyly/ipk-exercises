#include <iostream>

double fast_recursive(double q, int n) {

    if (n < 0) {
        std::cout << "Error: n is negative." << std::endl;
        return(0);
    }

    if (n == 0) {
        return(1);
    } else if (n%2 == 0) {
        double sqrt = fast_recursive(q, n/2);
        return(sqrt * sqrt);
    } else {
        return(fast_recursive(q, n-1) * q);
    }

}

double root_iterative(double q, int n, int steps) {

    if (q <= 0 | n < 0 | steps < 0) {
        std::cout << "Error: Ungültige Eingabe!" << std::endl;
        return(0);
    }

    double m = n;
    double root = 1;
    for (int i = 0; i < steps; i++) {
        root += (1/m) * ((q / fast_recursive(root, n-1)) - root);
    }
    return(root);

}

void test_root(double q, int n, int steps) {

    double root = root_iterative(q, n, steps);
    double power = fast_recursive(root, n);
    double diff = q - power;

    std::cout << "q\t: " << q << std::endl;
    std::cout << "n\t: " << n << std::endl;
    std::cout << "a\t: " << root << std::endl;
    std::cout << "a^n\t: " << power << std::endl;
    std::cout << "q-a^n\t: " << diff << std::endl;

}

int main(int argc, char** argv) {

    test_root(2003002347, 2, 100);
    test_root(5023002847, 7, 100);
    test_root(9003402307, 1, 100);

    return(0);

}

