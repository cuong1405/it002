#include <cmath>
#include <iostream>
using namespace std;

struct point {
  float x, y;
};
typedef struct point POINT;

void Nhap(POINT &);
void Xuat(POINT);
float TinhKhoangCach(POINT, POINT);
float TinhChuVi(POINT, POINT, POINT);
float TinhDienTich(POINT, POINT, POINT);
POINT TinhTrongTam(POINT, POINT, POINT);
bool KiemTraHopLe(POINT, POINT, POINT);

int main() {
  POINT A, B, C;

  cout << "Nhap toa do diem A:" << endl;
  Nhap(A);
  cout << "Nhap toa do diem B:" << endl;
  Nhap(B);
  cout << "Nhap toa do diem C:" << endl;
  Nhap(C);

  cout << "Toa do cac diem da nhap:" << endl;
  cout << "A = ";
  Xuat(A);
  cout << "B = ";
  Xuat(B);
  cout << "C = ";
  Xuat(C);

  if (!KiemTraHopLe(A, B, C)) {
    cout << "Ba diem khong tao thanh tam giac!" << endl;
  } else {
    cout << "Chu vi tam giac: " << TinhChuVi(A, B, C) << endl;
    cout << "Dien tich tam giac: " << TinhDienTich(A, B, C) << endl;
    cout << "Toa do trong tam: ";
    Xuat(TinhTrongTam(A, B, C));
  }

  return 0;
}

void Nhap(POINT &P) {
  cout << "Nhap x: ";
  cin >> P.x;
  cout << "Nhap y: ";
  cin >> P.y;
}

void Xuat(POINT P) { cout << "(" << P.x << ", " << P.y << ")" << endl; }

float TinhKhoangCach(POINT A, POINT B) {
  return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
}

bool KiemTraHopLe(POINT A, POINT B, POINT C) {
  float area =
      0.5 * fabs((B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y));
  if (area == 0)
    return false;
  return true;
}

float TinhChuVi(POINT A, POINT B, POINT C) {
  return TinhKhoangCach(A, B) + TinhKhoangCach(B, C) + TinhKhoangCach(C, A);
}

float TinhDienTich(POINT A, POINT B, POINT C) {
  return 0.5 * fabs((B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y));
}

POINT TinhTrongTam(POINT A, POINT B, POINT C) {
  POINT G;
  G.x = (A.x + B.x + C.x) / 3;
  G.y = (A.y + B.y + C.y) / 3;
  return G;
}
