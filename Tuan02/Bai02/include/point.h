#pragma once

class Point {
private:
  double x;
  double y;
  double z;

public:
  void Input();
  void Output() const;
  double DistanceTo(const Point &other) const;
};
