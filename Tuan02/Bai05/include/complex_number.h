#pragma once

class ComplexNumber {
private:
    double real;
    double imag;

public:
    void Input();
    void Output() const;
    ComplexNumber Add(const ComplexNumber& other) const;
    ComplexNumber Subtract(const ComplexNumber& other) const;
    ComplexNumber Multiply(const ComplexNumber& other) const;
};
