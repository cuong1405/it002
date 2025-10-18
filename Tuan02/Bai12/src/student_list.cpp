#include "student_list.h"
#include <iostream>

using namespace std;

void StudentList::Input() {
  int n;
  cout << "Enter the number of students: ";
  cin >> n;

  students.resize(n);
  for (int i = 0; i < n; i++) {
    cout << "\nEnter information for student " << i + 1 << ":\n";
    students[i].Input();
  }
}

void StudentList::Output() const {
  cout << "\nStudent List: " << endl;
  for (const auto &student : students) {
    student.Output();
    cout << endl;
  }
}

Student StudentList::FindHighestAverage() const {
  Student top = students[0];
  for (const auto &student : students) {
    if (student.Average() > top.Average()) {
      top = student;
    }
  }
  return top;
}

Student StudentList::FindLowestAverage() const {
  Student bottom = students[0];
  for (const auto &student : students) {
    if (student.Average() < bottom.Average()) {
      bottom = student;
    }
  }
  return bottom;
}
