#include <iostream>
#include <cmath>
using namespace std;

struct circle {
  float x, y;
  float r;
};
typedef struct circle CIRCLE;

void Nhap(CIRCLE &);
void Xuat(CIRCLE);
bool KiemTraHopLe(CIRCLE);
float TinhChuVi(CIRCLE);
float TinhDienTich(CIRCLE);

int main() {
  CIRCLE c;

  cout << "Nhap thong tin duong tron:" << endl;
  Nhap(c);

  cout << "Duong tron da nhap: ";
  Xuat(c);

  if (!KiemTraHopLe(c)) {
    cout << "Ban kinh khong hop le!" << endl;
  } else {
    cout << "Chu vi duong tron: " << TinhChuVi(c) << endl;
    cout << "Dien tich duong tron: " << TinhDienTich(c) << endl;
  }

  return 0;
}

void Nhap(CIRCLE &c) {
  cout << "Nhap toa do tam (x, y): ";
  cin >> c.x >> c.y;
  cout << "Nhap ban kinh: ";
  cin >> c.r;
}

void Xuat(CIRCLE c) {
  cout << "Tam(" << c.x << ", " << c.y << "), R = " << c.r << endl;
}

bool KiemTraHopLe(CIRCLE c) {
  return c.r > 0;
}

float TinhChuVi(CIRCLE c) {
  return 2 * M_PI * c.r;
}

float TinhDienTich(CIRCLE c) {
  return M_PI * c.r * c.r;
}
