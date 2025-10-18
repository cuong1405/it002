#pragma once
#include "fraction.h"
#include <vector>

class FractionSequence {
private:
    std::vector<Fraction> fractions;

public:
    void Input();
    void Output() const;
    Fraction FindMax() const;
    void SortAscending();
    void SortDescending();
};
