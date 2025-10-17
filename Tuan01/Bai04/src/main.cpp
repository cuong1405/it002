#include <iostream>
using namespace std;

struct phanso {
  int Tu;
  int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);
bool KiemTraPhanSoHopLe(PHANSO);
int UCLN();
void RutGon(PHANSO &);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);

int main() {
  PHANSO ps1, ps2;

  cout << "Nhap phan so thu nhat: " << endl;
  Nhap(ps1);
  cout << "Phan so vua nhap la: ";
  Xuat(ps1);
  if (!KiemTraPhanSoHopLe(ps1))
    cout << "Phan so thu nhat khong hop le!" << endl;

  cout << "Nhap phan so thu hai: " << endl;
  Nhap(ps2);
  cout << "Phan so vua nhap la: ";
  Xuat(ps2);
  if (!KiemTraPhanSoHopLe(ps2))
    cout << "Phan so thu hai khong hop le!" << endl;

  cout << "Tong hai phan so: ";
  Xuat(Tong(ps1, ps2));

  cout << "Hieu hai phan so: ";
  Xuat(Hieu(ps1, ps2));

  cout << "Tich hai phan so: ";
  Xuat(Tich(ps1, ps2));

  cout << "Thuong hai phan so: ";
  Xuat(Thuong(ps1, ps2));

  return 0;
}

void Nhap(PHANSO &x) {
  cout << "Nhap tu so: ";
  cin >> x.Tu;

  cout << "Nhap mau so: ";
  cin >> x.Mau;
}

void Xuat(PHANSO x) { cout << x.Tu << "/" << x.Mau << endl; }

bool KiemTraPhanSoHopLe(PHANSO x) {
  if (x.Mau == 0) {
    return false;
  }

  return true;
}

int UCLN(int a, int b) {
  if (b == 0)
    return abs(a);
  return UCLN(b, a % b);
}

void RutGon(PHANSO &x) {
  int ucln = UCLN(x.Tu, x.Mau);

  x.Tu /= ucln;
  x.Mau /= ucln;

  if (x.Mau < 0) {
    x.Mau *= -1;
    x.Tu *= -1;
  }
}

PHANSO Tong(PHANSO a, PHANSO b) {
  PHANSO kq;

  kq.Tu = a.Tu * b.Mau + a.Mau * b.Tu;
  kq.Mau = a.Mau * b.Mau;

  RutGon(kq);

  return kq;
}

PHANSO Hieu(PHANSO a, PHANSO b) {
  PHANSO kq;

  kq.Tu = a.Tu * b.Mau - a.Mau * b.Tu;
  kq.Mau = a.Mau * b.Mau;

  RutGon(kq);

  return kq;
}

PHANSO Tich(PHANSO a, PHANSO b) {
  PHANSO kq;

  kq.Tu = a.Tu * b.Tu;
  kq.Mau = a.Mau * b.Mau;

  RutGon(kq);

  return kq;
}

PHANSO Thuong(PHANSO a, PHANSO b) {
  PHANSO kq;

  kq.Tu = a.Tu * b.Mau;
  kq.Mau = a.Mau * b.Tu;

  RutGon(kq);

  return kq;
}
