#include "circle.h"
#include <cmath>
#include <iostream>

using namespace std;

void Circle::Input() {
    cout << "Enter center coordinates: " << endl;
    center.Input();
    cout << "Enter radius: ";
    cin >> radius;
}

void Circle::Output() const {
    cout << "Center ";
    center.Output();
    cout << ", Radius: " << radius << endl;
}

bool Circle::IsValid() const {
    return (radius > 0);
}

double Circle::Area() const {
    return M_PI * radius * radius;
}

double Circle::Circumference() const {
    return 2 * M_PI * radius;
}
