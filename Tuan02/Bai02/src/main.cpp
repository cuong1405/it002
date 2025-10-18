#include "point.h"
#include <iostream>

using namespace std;

int main() {
    Point point1, point2;

    cout << "Enter coordinates for point 1: " << endl;
    point1.Input();
    cout << "Enter coordinates for point 2: " << endl;
    point2.Input();

    cout << "Point 1: ";
    point1.Output();
    cout << "Point 2: ";
    point2.Output();

    double distance = point1.DistanceTo(point2);
    cout << "Distance between the two points: " << distance << endl;

    return 0;
}
