#include <iostream>

int main(int argc, char** argv) {

    // Einlesen von N
    unsigned long N;
    std::cout << "Bitte geben Sie das N ein: ";
    std::cin >> N;

    unsigned long lastlast_f = 0;
    unsigned long last_f = 1;
    
    std::cout << std::endl << lastlast_f; 

    for (unsigned long i = 1; i <= N; i++) {
        std::cout << " " << last_f;
        unsigned long new_f = lastlast_f + last_f;
        lastlast_f = last_f;
        last_f = new_f;
    }

    std::cout << std::endl;

}

