#include <iostream>
#include <vector>
#include <algorithm>
#include "point.cc"
#include "pgm.cc"
#include "canvas.hh"

Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels)
    : _width(width), _height(height), _center(center), _horPixels(horPixels), _vertPixels(vertPixels) {
    std::vector<int> empty_col(vertPixels);
    for (int j = 0; j < vertPixels; j++) {
        empty_col[j] = 0;
    }
    std::vector<std::vector<int>> empty_grid(horPixels);
    for (int i = 0; i < horPixels; i++) {
        empty_grid[i] = empty_col;
    }
    _gray = empty_grid;
}

int Canvas::brightness(int i, int j) const {
    return(_gray[i][j]);
}

void Canvas::setBrightness(int i, int j, int brightness) {
    _gray[i][j] = brightness;
}

Point Canvas::coord(int i, int j) const {
    return(Point(_center.x() + i * _width / _horPixels - 0.5 * _width, 
                 _center.y() + j * _height / _vertPixels - 0.5 * _height));
}

void Canvas::write(const std::string& filename) {
    write_pgm(_gray, filename);
}

/* For testing purposes
int main(int argc, char** argv) {

    Canvas picture(Point(2, 2), 4, 4, 8, 8);
    for (int i = 0; i < 8; i++) {
        std::cout << std::endl;
        for (int j = 0; j < 8; j++) {
            std::cout << picture.brightness(i, j);
        }
    }
    std::cout << std::endl << std::endl;

    for (int k = 0; k < 8; k++) {
        picture.setBrightness(k, k, 1);
    }

    for (int i = 0; i < 8; i++) {
        std::cout << std::endl;
        for (int j = 0; j < 8; j++) {
            std::cout << picture.brightness(i, j);
        }
    }
    std::cout << std::endl << std::endl;

    std::cout << "( " << picture.coord(0, 0).x() << " , ";
    std::cout << picture.coord(0, 0).y() << " )" << std::endl;
    std::cout << "( " << picture.coord(0, 7).x() << " , ";
    std::cout << picture.coord(0, 7).y() << " )" << std::endl;
    std::cout << "( " << picture.coord(7, 0).x() << " , ";
    std::cout << picture.coord(7, 0).y() << " )" << std::endl;
    std::cout << "( " << picture.coord(7, 7).x() << " , ";
    std::cout << picture.coord(7, 7).y() << " )" << std::endl;

}
*/
