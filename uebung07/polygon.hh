#ifndef POLYGON
#define POLYGON

#include <vector>
#include "point.hh"

class Polygon {
public:
    Polygon(const std::vector<Point>& corners) 
        : _corners(corners) 
    {};
    Polygon(const std::vector<double>& x,
            const std::vector<double>& y);
    std::size_t corners() const;
    const Point& corner(std::size_t i) const;
    double volume() const;
private:
    std::vector<Point> _corners;
};

#endif
