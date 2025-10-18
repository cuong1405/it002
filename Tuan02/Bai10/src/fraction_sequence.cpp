#include "fraction_sequence.h"
#include <algorithm>
#include <iostream>

using namespace std;

void FractionSequence::Input() {
  int n;
  cout << "Enter the number of fractions: ";
  cin >> n;

  fractions.resize(n);
  cout << "Enter the fractions: " << endl;
  for (int i = 0; i < n; i++) {
    cout << "Fraction " << i + 1 << ":\n";
    fractions[i].Input();
    while (!fractions[i].IsValid()) {
      cout << "Please enter again: \n";
      fractions[i].Input();
    }
    fractions[i].Simplify();
  }
}

void FractionSequence::Output() const {
  for (const auto &fraction : fractions) {
    fraction.Output();
    cout << " ";
  }
  cout << endl;
}

Fraction FractionSequence::FindMax() const {
  Fraction maxFraction = fractions[0];
  for (const auto &fraction : fractions) {
    if (fraction.IsGreaterThan(maxFraction)) {
      maxFraction = fraction;
    }
  }
  return maxFraction;
}

void FractionSequence::SortAscending() {
  sort(
      fractions.begin(), fractions.end(),
      [](const Fraction &a, const Fraction &b) { return !a.IsGreaterThan(b); });
}

void FractionSequence::SortDescending() {
  sort(fractions.begin(), fractions.end(),
       [](const Fraction &a, const Fraction &b) { return a.IsGreaterThan(b); });
}
