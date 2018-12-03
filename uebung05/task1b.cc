#include <iostream>
#include <vector>

std::pair<double, double> range(std::vector<double> v) {
    
    if (v.size() == 0) {
        throw std::invalid_argument("Empty vector!");
    }

    std::pair<double, double> res = {v[0], v[0]};
    for (int i = 1; i < v.size(); i++) {
        if (v[i] < res.first) {
            res.first = v[i];
        }
        if (v[i] > res.second) {
            res.second = v[i];
        }
    }
    return(res);

}

int main(int argc, char** argv) {

    std::vector<double> v1(10);
    std::cout << range(v1).first << " und " << range(v1).second << std::endl;

    std::vector<double> v2 = {{ 1, 20, -42, 63, -44, 0, 12, 13.4 }};
    std::cout << range(v2).first << " und " << range(v2).second << std::endl;

    std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
    std::cout << range(v3).first << " und " << range(v3).second << std::endl;

    return(0);

}
