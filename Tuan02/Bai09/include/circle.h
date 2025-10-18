#pragma once
#include "point.h"

class Circle {
private:
    Point center;
    double radius;

public:
    void Input();
    void Output() const;
    bool IsValid() const;
    double Area() const;
    double Circumference() const;
};
