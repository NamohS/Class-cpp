#include <iostream>
using namespace std;

class Cuboid {
private:
    double height;
    double width;
    double length;

public:
    Cuboid(double height, double width, double length) {
        this->height = height;
        this->width = width;
        this->length = length;
    }

    double volume() {
        return height * width * length;
    }
};

int main() {
    double height, width, length;
    cin >> height >> width >> length;

    Cuboid cuboid(height, width, length);
    double volume = cuboid.volume();

    cout << volume << endl;

    return 0;
}