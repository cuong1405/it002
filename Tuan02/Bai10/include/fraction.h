#pragma once

class Fraction {
 private:
  int numerator;
  int denominator;
  int GCD(int a, int b) const;

 public:
  void Input();
  void Output() const;
  void Simplify();
  bool IsValid() const;
  bool IsGreaterThan(const Fraction& other) const;
  double GetValue() const;
};
