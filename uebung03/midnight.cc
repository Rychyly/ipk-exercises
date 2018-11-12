#include <cmath>
#include <iostream>

int main(int argc, char** argv) {
    
    std::cout << "Gelöst werden soll die Gleichung ax^2 + bx + c = 0." << std::endl;
    std::cout << std::endl;
    std::cout << "Bitte geben Sie die Parameter a, b, c ein." << std::endl;

    // Einlesen der Benutzereingaben
    double a;
    std::cout << "a = " << std::flush; 
    std::cin >> a;

    double b;
    std::cout << "b = " << std::flush;
    std::cin >> b;

    if (a == 0 & b == 0) {
        std::cout << std::endl << "Hierfür wird es keine eindeutige Lösung geben!" << std::endl;
        return(1);
    }

    double c;
    std::cout << "c = " << std::flush;
    std::cin >> c;

    // Berechnen der Lösungen
    double p = b/a;
    double q = c/a;
    double D = p*p/4 - q;

    if (D < 0) {
        std::cout << std::endl << "Die Lösung wird komplex sein!" << std::endl;
        return(1);
    }

    double x1 = -p/2 - std::sqrt(D);
    double x2 = -p/2 + std::sqrt(D);

    std::cout << std::endl << "Die Lösungen sind x1 = " << x1 << " und x2 = " << x2 << "." << std::endl;
    return(0);

}
