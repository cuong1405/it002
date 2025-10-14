#include <cmath>
#include <iostream>
using namespace std;

struct toado {
  double x;
  double y;
  double z;
};
typedef struct toado TOADO;

void Nhap(TOADO &);
double TinhKhoangCach(TOADO a, TOADO b);

int main() {
  TOADO diemA, diemB;

  cout << "Nhap toa do 2 diem trong khong gian" << endl;

  cout << "Nhap toa do diem A: " << endl;
  Nhap(diemA);
  cout << "Nhap toa do diem B: " << endl;
  Nhap(diemB);

  cout << "Khoang cach giua hai diem A va B: " << TinhKhoangCach(diemA, diemB) << endl;

  return 0;
}

void Nhap(TOADO &diem) {
  cout << "Nhap hoanh do: ";
  cin >> diem.x;

  cout << "Nhap tung do: ";
  cin >> diem.y;

  cout << "Nhap cao do: ";
  cin >> diem.z;
}

double TinhKhoangCach(TOADO A, TOADO B) {
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2) + pow(B.z - A.z, 2));
}
