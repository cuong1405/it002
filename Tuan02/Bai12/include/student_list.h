#pragma once
#include "student.h"
#include <vector>

class StudentList {
private:
  std::vector<Student> students;

public:
  void Input();
  void Output() const;
  Student FindHighestAverage() const;
  Student FindLowestAverage() const;
};
