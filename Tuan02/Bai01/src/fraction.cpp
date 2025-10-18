#include "fraction.h"
#include <iostream>

using namespace std;

bool Fraction::IsValid() const {
    if (denominator != 0)
        return true;
    return false;
}

void Fraction::Input() {
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
}

void Fraction::Output() const {
    cout << numerator << "/" << denominator << endl;
}

int  Fraction::GCD(int a, int b) const {
    if (b == 0)
        return abs(a);
    return GCD(b, a % b);
}

void Fraction::Simplify() {
    int gcd = GCD(numerator, denominator);
    
    numerator /= gcd;
    denominator /= gcd;

    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

bool Fraction::IsZero() const {
    if (numerator == 0)
        return true;
    return false;
}

bool Fraction::IsNegative() const {
    if (numerator < 0)
        return true;
    return false;
}

bool Fraction::IsPositive() const {
    if (numerator > 0)
        return true;
    return false;
}
