class Canvas {
public:
    Canvas(const Point& center, double width, double height, int horPixels, int vertPixels);
    int brightness(int i, int j) const;
    void setBrightness(int i, int j, int brightness);
    Point coord(int i, int j) const;
    void write(const std::string& filename);

private:
    const double _width;
    const double _height;
    const Point _center;
    const int _horPixels;
    const int _vertPixels;
    std::vector<std::vector<int>> _gray;

};
