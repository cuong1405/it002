#include <iostream>
using namespace std;

struct date {
  int day, month, year;
};
typedef struct date DATE;

void Nhap(DATE &);
void Xuat(DATE);
bool NamNhuan(int);
int SoNgayTrongThang(int, int);
bool KiemTraNgayHopLe(DATE);
DATE NgayHomQua(DATE);

int main() {
  DATE date;

  cout << "Nhap ngay: ";
  Nhap(date);
  cout << "Ngay da nhap la: ";
  Xuat(date);

  if (!KiemTraNgayHopLe(date)) {
    cout << "Ngay da nhap khong hop le!" << endl;
  } else {
    cout << "Ngay hom qua la: ";
    Xuat(NgayHomQua(date));
  }

  return 0;
}

void Nhap(DATE &date) {
  cout << "Nhap ngay: ";
  cin >> date.day;

  cout << "Nhap thang: ";
  cin >> date.month;

  cout << "Nhap nam: ";
  cin >> date.year;
}

void Xuat(DATE date) {
  cout << date.day << "/" << date.month << "/" << date.year << endl;
}

bool NamNhuan(int year) {
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    return true;
  return false;
}

int SoNgayTrongThang(int month, int year) {
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
    return NamNhuan(year) ? 29 : 28;

  default:
    return 0;
  }
}

bool KiemTraNgayHopLe(DATE date) {
  if (date.month < 1 || date.month > 12)
    return false;

  int maxDate = SoNgayTrongThang(date.month, date.year);
  if (date.day < 1 || date.day > maxDate)
    return false;

  return true;
}

DATE NgayHomQua(DATE date) {
  DATE prev_date = date;
  prev_date.day--;

  if (prev_date.day == 0) {
    prev_date.month--;
    if (prev_date.month == 0) {
      prev_date.month = 12;
      prev_date.year--;
    }
    prev_date.day = SoNgayTrongThang(prev_date.month, prev_date.year);
  }

  return prev_date;
}
