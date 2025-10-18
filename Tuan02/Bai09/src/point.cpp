#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

Point::Point() : x(0), y(0) {}  // Default constructor
Point::Point(double xVal, double yVal) : x(xVal), y(yVal) {}

void Point::Input() {
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
}

void Point::Output() const {
    cout << "(" << x << ", " << y << ")";
}

double Point::DistanceTo(const Point& other) const {
    double deltaX = x - other.x;
    double deltaY = y - other.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

