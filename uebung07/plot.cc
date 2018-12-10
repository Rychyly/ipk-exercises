#include <cmath>
#include <algorithm>
#include "canvas.cc"

int main(int argc, char** argv) {

    Canvas picture(Point(), 4, 3, 4000, 3000);

    for (int i = 0; i < 4000; i++) {
        for (int j = 0; j < 3000; j++) {
            double x = picture.coord(i, j).x();
            double y = picture.coord(i, j).y();
            if (x == 0 or y == 0) {
                picture.setBrightness(i, j, 0);
            } else {
                double sinprod = std::sin(1.0/x) * std::sin(1.0/y);
                double value = 100 * (sinprod + 1);
                double brightness = (0 > value) ? 0 : value;
                picture.setBrightness(i, j, std::round(brightness));
            }
        }
    }

    picture.write("plot.png");
    return(0);

}
