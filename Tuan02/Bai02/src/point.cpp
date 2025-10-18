#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

void Point::Input() {
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
}

void Point::Output() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

double Point::DistanceTo(const Point& other) const {
    double deltaX = x - other.x;
    double deltaY = y - other.y;
    double deltaZ = z - other.z;

    return sqrt(deltaX * deltaX + deltaY * deltaY + deltaZ * deltaZ);
}
