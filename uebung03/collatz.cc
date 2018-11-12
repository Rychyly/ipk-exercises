#include <iostream>

void collatz(int zahl) {
    
    while(zahl != 1 & zahl != 0 & zahl != -1 & zahl != -5 & zahl != -17) {
        std::cout << zahl << std::endl;
        if (zahl % 2 == 0) {
            zahl /= 2;
        } else {
            zahl = 3 * zahl + 1;
        }
    }

}

int main(int argc, char** argv) {
    
    std::cout << "Bitte geben Sie einen Startwert ein: ";
    int i;
    std::cin >> i;

    collatz(i);
    return(0);

}
