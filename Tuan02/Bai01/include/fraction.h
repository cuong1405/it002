#pragma once

class Fraction {
 private:
  int numerator;
  int denominator;
  int GCD(int a, int b) const;

 public:
  void Input();
  void Simplify();
  void Output() const;
  bool IsZero() const;
  bool IsNegative() const;
  bool IsPositive() const;
  bool IsValid() const;
};
