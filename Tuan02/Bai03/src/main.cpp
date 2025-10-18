#include "fraction.h"
#include <iostream>

using namespace std;

int main() {
    Fraction fraction1, fraction2;

    cout << "Input fraction" << endl;

    fraction1.Input();
    fraction1.Simplify();
    cout << "The fraction you just entered: ";
    fraction1.Output();

    fraction2.Input();
    fraction2.Simplify();
    cout << "The fraction you just entered: ";
    fraction2.Output();

    if (!fraction1.IsValid() || !fraction2.IsValid()) {
        cout << "The fraction is invalid!" << endl;
    } else {
        cout << "The largest fraction is: ";
        if (fraction1.IsGreaterThan(fraction2)) {
            fraction1.Output();
        } else {
            fraction2.Output();
        }
    }

    return 0;
}
