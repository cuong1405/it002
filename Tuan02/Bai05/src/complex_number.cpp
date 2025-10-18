#include "complex_number.h"
#include <iostream>

using namespace std;

void ComplexNumber::Input() {
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
}

void ComplexNumber::Output() const {
    if (imag >= 0) {
        cout << real << " + " << imag << "i" << endl;
    } else {
        cout << real << " - " << -imag << "i" << endl;
    }
}

ComplexNumber ComplexNumber::Add(const ComplexNumber& other) const {
    ComplexNumber result;
    result.real = real + other.real;
    result.imag = imag + other.imag;
    return result;
}

ComplexNumber ComplexNumber::Subtract(const ComplexNumber& other) const {
    ComplexNumber result;
    result.real = real - other.real;
    result.imag = imag - other.imag;
    return result;
}

ComplexNumber ComplexNumber::Multiply(const ComplexNumber& other) const {
    ComplexNumber result;
    result.real = real * other.real - imag * other.imag;
    result.imag = real * other.imag + imag * other.real;
    return result;
}
