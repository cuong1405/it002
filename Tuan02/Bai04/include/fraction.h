#pragma once

class Fraction {
 private:
  int numerator;
  int denominator;
  int GCD(int a, int b) const;
  bool IsZero() const;

 public:
  void Input();
  void Simplify();
  void Output() const;
  bool IsValid() const;
  Fraction Add(const Fraction& other) const;
  Fraction Subtract(const Fraction& other) const;
  Fraction Multiply(const Fraction& other) const;
  Fraction Divide(const Fraction& other) const;
};
