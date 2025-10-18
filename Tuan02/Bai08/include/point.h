#pragma once

class Point {
private:
  double x;
  double y;

public:
  Point();
  Point(double xVal, double yVal);
  void Input();
  void Output() const;
  double DistanceTo(const Point &other) const;

  double GetX() const { return x; }
  double GetY() const { return y; }
};
