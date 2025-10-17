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
DATE NgayKeTiep(DATE);

int main() {
  DATE date;

  cout << "Nhap ngay: ";
  Nhap(date);
  cout << "Ngay da nhap la: ";
  Xuat(date);
  if (!KiemTraNgayHopLe(date)) {
    cout << "Ngay da nhap khong hop le!" << endl;
  } else {
    cout << "Ngay ke tiep la: ";
    Xuat(NgayKeTiep(date));
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

DATE NgayKeTiep(DATE date) {
  DATE next_date = date;
  next_date.day++;

  if (next_date.day > SoNgayTrongThang(date.month, date.year)) {
    next_date.day = 1;
    next_date.month++;

    if (next_date.month > 12) {
      next_date.month = 1;
      next_date.year++;
    }
  }

  return next_date;
}
