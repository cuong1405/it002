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

int Fraction::GCD(int a, int b) const {
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

Fraction Fraction::Add(const Fraction &other) const {
  Fraction result;
  result.numerator =
      numerator * other.denominator + other.numerator * denominator;
  result.denominator = denominator * other.denominator;

  return result;
}

Fraction Fraction::Subtract(const Fraction &other) const {
  Fraction result;
  result.numerator =
      numerator * other.denominator - other.numerator * denominator;
  result.denominator = denominator * other.denominator;

  return result;
}

Fraction Fraction::Multiply(const Fraction &other) const {
  Fraction result;
  result.numerator = numerator * other.numerator;
  result.denominator = denominator * other.denominator;

  return result;
}

Fraction Fraction::Divide(const Fraction &other) const {
  Fraction result;
  if (other.IsZero()) {
    cout << "Math error: Cannot divide by zero." << endl;
  }
  result.numerator = numerator * other.denominator;
  result.denominator = denominator * other.numerator;

  return result;
}
