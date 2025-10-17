
#include <iostream>
#include <string>
using namespace std;

struct hocsinh {
  string hoten;
  float toan;
  float van;
  float dtb;
};
typedef struct hocsinh HOCSINH;

void Nhap(HOCSINH &);
void Xuat(HOCSINH);
void TinhDTB(HOCSINH &);

int main() {
  HOCSINH hs;

  cout << "Nhap thong tin hoc sinh:" << endl;
  Nhap(hs);
  TinhDTB(hs);

  cout << "\nThong tin vua nhap:" << endl;
  Xuat(hs);

  return 0;
}

void Nhap(HOCSINH &hs) {
  cout << "Nhap ho ten: ";
  getline(cin, hs.hoten);

  cout << "Nhap diem toan: ";
  cin >> hs.toan;

  cout << "Nhap diem van: ";
  cin >> hs.van;
}

void TinhDTB(HOCSINH &hs) {
  hs.dtb = (hs.toan + hs.van) / 2;
}

void Xuat(HOCSINH hs) {
  cout << "Ho ten: " << hs.hoten << endl;
  cout << "Toan: " << hs.toan << ", Van: " << hs.van << endl;
  cout << "Diem trung binh: " << hs.dtb << endl;
}
