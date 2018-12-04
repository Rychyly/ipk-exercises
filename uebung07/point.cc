#include <iostream>
#include "point.hh"

Point::Point() {
    _x = 0;
    _y = 0;
}

Point::Point(double x, double y) {
    _x = x;
    _y = y;
}

double Point::x() const {
    return(_x);
}

double Point::y() const {
    return(_y);
}

/* For testing purposes
int main(int argc, char** argv) {
    Point p;
    Point q(4, 2);
    std::cout << p.x() << p.y() << std::endl;
    std::cout << q.x() << q.y() << std::endl;
}
*/
