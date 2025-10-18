#include "fraction.h"
#include <iostream>

using namespace std;

int Fraction::GCD(int a, int b) const {
    if (b == 0)
        return abs(a);
    return GCD(b, a % b);
}

void Fraction::Input() {
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
}

void Fraction::Output() const {
    cout << numerator << "/" << denominator;
}

void Fraction::Simplify() {
    int gcd = GCD(numerator, denominator);
    if (gcd != 0) {
        numerator /= gcd;
        denominator /= gcd;
    }
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

bool Fraction::IsValid() const {
    return (denominator != 0);
}

bool Fraction::IsGreaterThan(const Fraction& other) const {
    return (numerator * other.denominator > other.numerator * denominator);
}

double Fraction::GetValue() const {
    return (float) numerator / denominator;
}
