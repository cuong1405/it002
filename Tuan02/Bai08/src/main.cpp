#include "triangle.h"
#include <iostream>

using namespace std;

int main() {
  Triangle t;
  t.Input();

  if (!t.IsValid()) {
    cout << "The given points do not form a valid triangle!" << endl;
  } else {
    cout << "Triangle vertices: ";
    t.Output();
    cout << endl;

    double perimeter = t.Perimeter();
    double area = t.Area();
    Point centroid = t.Centroid();

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    cout << "Centroid: ";
    centroid.Output();
    cout << endl;

    return 0;
  }
}
