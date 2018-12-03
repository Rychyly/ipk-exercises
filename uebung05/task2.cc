#include <iostream>
#include <string>

std::pair<int,int> parse_int(std::string number) {
    
    int coeff = 1;
    int result = 0;
    int pos = 0;
    bool reading = false;

    while (pos < number.size() and !reading) {
        switch (number[pos]) {
            case ' ':
                pos++;
                break;
            case '+':
                pos++;
                reading = true;
                break;
            case '-':
                pos++;
                coeff = -1;
                reading = true;
                break;
            case '0': 
            case '1': 
            case '2': 
            case '3': 
            case '4': 
            case '5': 
            case '6': 
            case '7': 
            case '8': 
            case '9': 
                reading = true;
                break;
            default:
                throw std::invalid_argument("Error: Invalid input.");
        }
    }

    while (pos < number.size() and reading) {
        int digit = number[pos] - '0';
        if (0 <= digit and digit <= 9) {
            result = 10 * result + digit;
            pos++;
        } else {
            reading = false;
        }
    }

    std::pair<int, int> return_value = {coeff * result, pos};
    return(return_value);
        
}

int main(int argc, char** argv) {
    
    std::cout << parse_int("").first << " until " << parse_int("").second << std::endl;
    std::cout << parse_int("123").first << " until " << parse_int("123").second << std::endl;
    std::cout << parse_int("+123").first << " until " << parse_int("+123").second << std::endl;
    std::cout << parse_int("-123").first << " until " << parse_int("-123").second << std::endl;
    std::cout << parse_int("-12.3").first << " until " << parse_int("-12.3").second << std::endl;
    std::cout << parse_int("1a23").first << " until " << parse_int("1a23").second << std::endl;
    std::cout << parse_int("+-123").first << " until " << parse_int("+-123").second << std::endl;
    
    return(0);

}
