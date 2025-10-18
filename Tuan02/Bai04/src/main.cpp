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
    Fraction sum = fraction1.Add(fraction2);
    Fraction difference = fraction1.Subtract(fraction2);
    Fraction product = fraction1.Multiply(fraction2);
    Fraction quotient = fraction1.Divide(fraction2);

    cout << "Sum: ";
    sum.Output();
    cout << "Difference: ";
    difference.Output();
    cout << "Product: ";
    product.Output();

    // Handle cannot divide by zero error
    if (quotient.IsValid()) {
      cout << "Quotient: ";
      quotient.Output();
    }
  }

  return 0;
}
