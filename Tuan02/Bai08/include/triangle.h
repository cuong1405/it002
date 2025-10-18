#pragma once

#include "point.h"
class Triangle {
private:
  Point A;
  Point B;
  Point C;

public:
  void Input();
  void Output() const;
  bool IsValid() const;
  double Perimeter() const;
  double Area() const;
  Point Centroid() const;
};
