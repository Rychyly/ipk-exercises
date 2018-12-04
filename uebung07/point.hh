#ifndef POINT
#define POINT

class Point {
public:
    Point();
    Point(double x, double y);
    double x() const;
    double y() const;
private:
    double _x;
    double _y;
};

#endif
