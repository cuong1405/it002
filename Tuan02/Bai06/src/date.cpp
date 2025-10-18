#include "date.h"
#include <iostream>

using namespace std;

bool Date::IsLeapYear() const {
  if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    return true;
  return false;
}

int Date::DaysInMonth() const {
  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31;
  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
  case 2:
    return IsLeapYear() ? 29 : 28;
  default:
    return 0;
  }
}

void Date::Input() {
  cout << "Enter day: ";
  cin >> day;
  cout << "Enter month: ";
  cin >> month;
  cout << "Enter year: ";
  cin >> year;
}

void Date::Output() const {
  cout << day << "/" << month << "/" << year << endl;
}

void Date::NextDate() {
  day++;
  if (day > DaysInMonth()) {
    day = 1;
    month++;
    if (month > 12) {
      month = 1;
      year++;
    }
  }
}

bool Date::IsValid() const {
  if (year < 1)
    return false;
  if (month < 1 || month > 12)
    return false;
  if (day < 1 || day > DaysInMonth())
    return false;
  return true;
}
