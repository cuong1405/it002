#include "triangle.h"
#include <cmath>
#include <iostream>

using namespace std;

void Triangle::Input() {
  cout << "Enter coordinates for vertex A: " << endl;
  A.Input();
  cout << "Enter coordinates for vertex B: " << endl;
  B.Input();
  cout << "Enter coordinates for vertex C: " << endl;
  C.Input();
}

void Triangle::Output() const {
  cout << "A";
  A.Output();
  cout << ", B";
  B.Output();
  cout << ", C";
  C.Output();
  cout << endl;
}

bool Triangle::IsValid() const {
  double area = A.GetX() * (B.GetY() - C.GetY()) +
                B.GetX() * (C.GetY() - A.GetY()) +
                C.GetX() * (A.GetY() - B.GetY());
  return (fabs(area) > 1e-9);
}

double Triangle::Perimeter() const {
  double AB = A.DistanceTo(B);
  double BC = B.DistanceTo(C);
  double CA = C.DistanceTo(A);
  return AB + BC + CA;
}

double Triangle::Area() const {
  double a = B.DistanceTo(C);
  double b = C.DistanceTo(A);
  double c = A.DistanceTo(B);
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

Point Triangle::Centroid() const {
    double x = (A.GetX() + B.GetX() + C.GetX()) / 3;
    double y = (A.GetY() + B.GetY() + C.GetY()) / 3;
    return Point(x, y);
}
