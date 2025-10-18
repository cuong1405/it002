#include "fraction.h"
#include <iostream>

using namespace std;

int main() {
    Fraction f;

    cout << "Input fraction" << endl;
    f.Input();
    f.Simplify();
    cout << "The fraction you just entered: ";
    f.Output();

    if (!f.IsValid()) {
        cout << "The fraction is invalid!" << endl;
    } else if (f.IsZero()) {
        cout << "The fraction is zero." << endl;
    } else if (f.IsNegative()) {
        cout << "The fraction is negative." << endl;
    } else  {
        cout << "The fraction is positive." << endl;
    }

    return 0;
}
