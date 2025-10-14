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
void NhapDanhSach(HOCSINH[], int &);
void XuatDanhSach(HOCSINH[], int);
int TimCaoNhat(HOCSINH[], int);
int TimThapNhat(HOCSINH[], int);

int main() {
  HOCSINH ds[100];
  int n;

  cout << "Nhap so luong hoc sinh: ";
  cin >> n;

  NhapDanhSach(ds, n);

  cout << "\nDanh sach hoc sinh:\n";
  XuatDanhSach(ds, n);

  int CaoNhat = TimCaoNhat(ds, n);
  int ThapNhat = TimThapNhat(ds, n);

  cout << "\nHoc sinh co diem TB cao nhat:\n";
  Xuat(ds[CaoNhat]);

  cout << "\nHoc sinh co diem TB thap nhat:\n";
  Xuat(ds[ThapNhat]);

  return 0;
}

void Nhap(HOCSINH &hs) {
  cout << "Nhap ho ten: ";
  getline(cin, hs.hoten);
  cout << "Nhap diem toan: ";
  cin >> hs.toan;
  cout << "Nhap diem van: ";
  cin >> hs.van;
  TinhDTB(hs);
}

void Xuat(HOCSINH hs) {
  cout << "Ho ten: " << hs.hoten << endl;
  cout << "Toan: " << hs.toan << ", Van: " << hs.van
       << ", DTB: " << hs.dtb << endl;
}

void TinhDTB(HOCSINH &hs) {
  hs.dtb = (hs.toan + hs.van) / 2;
}

void NhapDanhSach(HOCSINH ds[], int &n) {
  for (int i = 0; i < n; i++) {
    cout << "\nHoc sinh thu " << i + 1 << ":\n";
    Nhap(ds[i]);
  }
}

void XuatDanhSach(HOCSINH ds[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "\nHoc sinh thu " << i + 1 << ":\n";
    Xuat(ds[i]);
  }
}

int TimCaoNhat(HOCSINH ds[], int n) {
  int CaoNhat = 0;
  for (int i = 1; i < n; i++)
    if (ds[i].dtb > ds[CaoNhat].dtb)
      CaoNhat = i;
  return CaoNhat;
}

int TimThapNhat(HOCSINH ds[], int n) {
  int ThapNhat = 0;
  for (int i = 1; i < n; i++)
    if (ds[i].dtb < ds[ThapNhat].dtb)
      ThapNhat = i;
  return ThapNhat;
}
