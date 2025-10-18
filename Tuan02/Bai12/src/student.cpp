#include "student.h"
#include <iostream>

using namespace std;

void Student::Input() {
  cout << "Enter student name: ";
  getline(cin >> ws, name);
  cout << "Enter math score: ";
  cin >> math_score;
  cout << "Enter literature score: ";
  cin >> literature_score;
}

void Student::Output() const {
  cout << "Student name: " << name << ", Math score: " << math_score
       << ", Literature score: " << literature_score
       << ", Average score: " << Average();
}

double Student::Average() const {
  return (math_score + literature_score) / 2.0;
}
