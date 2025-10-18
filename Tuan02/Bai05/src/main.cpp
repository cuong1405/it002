#include "complex_number.h"
#include <iostream>

using namespace std;

int main() {
    ComplexNumber z1, z2;

    cout << "Enter the first complex number: " << endl;
    z1.Input();
    cout << "Enter the second complex number: " << endl;
    z2.Input();

    cout << "Complex number 1: ";
    z1.Output();
    cout << "Complex number 2: ";
    z2.Output();

    ComplexNumber sum = z1.Add(z2);
    ComplexNumber difference = z1.Subtract(z2);
    ComplexNumber product = z1.Multiply(z2);

    cout << "Sum: ";
    sum.Output();
    cout << "Difference: ";
    difference.Output();
    cout << "Product: ";
    product.Output();

    return 0;
}
