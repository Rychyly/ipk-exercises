#include "polygon.hh"
#include <vector>
#include <iostream>
#include <cmath>

const double pi = M_PI;

Polygon::Polygon(const std::vector<double>& x,
                 const std::vector<double>& y) {
    for (int i = 0; i < x.size() or i < y.size(); i++) {
        Point p(x[i], y[i]);
        _corners.push_back(p);
    }
}

std::size_t Polygon::corners() const {
    return(_corners.size());
}

const Point& Polygon::corner(std::size_t i) const {
    return(_corners[i]);
}

double Polygon::volume() const {
    if (corners() <= 2) return(0);
    double A = 0;
    for (int i = 0; i < corners()-1; i++) {
        A += corner(i).x() * corner(i+1).y();
        A -= corner(i+1).x() * corner(i).y();
    }
    A += corner(corners()-1).x() * corner(0).y();
    A -= corner(0).x() * corner(corners()-1).y();
    return(A/2);
}

int main(int argc, char** argv) {
    
    int N;
    std::cout << std::endl << "Please enter number of corners: ";
    std::cin >> N;

    std::vector<double> x(N);
    std::vector<double> y(N);
    for (int i = 0; i < N; i++) {
        x[i] = std::cos(2 * pi * i / N);
        y[i] = std::sin(2 * pi * i / N);
    }
    Polygon p(x, y);

    std::cout << "The volume is: " << p.volume() << std::endl << std::endl;
}
