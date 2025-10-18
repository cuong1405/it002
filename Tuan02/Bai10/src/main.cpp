#include "fraction_sequence.h"
#include <iostream>

using namespace std;

int main() {
    FractionSequence sequence;
    sequence.Input();

    cout << "\nAll fractions: ";
    sequence.Output();

    Fraction maxFraction = sequence.FindMax();
    cout << "The biggest fraction is : ";
    maxFraction.Output();
    cout << endl;

    sequence.SortAscending();
    cout << "\nFractions in ascending order: " << endl;
    sequence.Output();

    sequence.SortDescending();
    cout << "\nFractions in descending order : " << endl;
    sequence.Output();

    return 0;
}
