#include "circle.h"
#include <iostream>

using namespace std;

int main() {
    Circle c;
    c.Input();

    if (!c.IsValid()) {
        cout << "Invalid circle! Radius must be positive." << endl;
    } else {
        cout << "Circle information: ";
        c.Output();
        cout << endl;

        cout << "Area: " << c.Area() << endl;
        cout << "Circumference: " << c.Circumference() << endl;
    }

    return 0;
}
