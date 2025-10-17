
#include <iostream>
using namespace std;

struct phanso {
  int tu;
  int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);
bool KiemTraHopLe(PHANSO);
int UCLN(int, int);
void RutGon(PHANSO &);
bool LonHon(PHANSO, PHANSO);
void NhapMang(PHANSO[], int &);
void XuatMang(PHANSO[], int);
PHANSO TimMax(PHANSO[], int);
void SapXepTang(PHANSO[], int);
void SapXepGiam(PHANSO[], int);

int main() {
  PHANSO a[100];
  int n;

  cout << "Nhap so luong phan so: ";
  cin >> n;

  NhapMang(a, n);

  cout << "Danh sach phan so da nhap:" << endl;
  XuatMang(a, n);

  PHANSO max = TimMax(a, n);
  cout << "Phan so lon nhat: ";
  Xuat(max);

  cout << "\nSap xep tang dan:" << endl;
  SapXepTang(a, n);
  XuatMang(a, n);

  cout << "\nSap xep giam dan:" << endl;
  SapXepGiam(a, n);
  XuatMang(a, n);

  return 0;
}

void Nhap(PHANSO &x) {
  cout << "Nhap tu: ";
  cin >> x.tu;
  cout << "Nhap mau: ";
  cin >> x.mau;
}

void Xuat(PHANSO x) { cout << x.tu << "/" << x.mau << endl; }

bool KiemTraHopLe(PHANSO x) {
  if (x.mau == 0)
    return false;
  return true;
}

int UCLN(int a, int b) {
  if (b == 0)
    return abs(a);
  return UCLN(b, a % b);
}

void RutGon(PHANSO &x) {
  int u = UCLN(x.tu, x.mau);
  x.tu /= u;
  x.mau /= u;
  if (x.mau < 0) {
    x.mau *= -1;
    x.tu *= -1;
  }
}

bool LonHon(PHANSO a, PHANSO b) {
  if ((float)a.tu / a.mau > (float)b.tu / b.mau)
    return true;
  return false;
}

void NhapMang(PHANSO a[], int &n) {
  for (int i = 0; i < n; i++) {
    cout << "Phan so thu " << i + 1 << ":" << endl;
    Nhap(a[i]);
    if (!KiemTraHopLe(a[i])) {
      cout << "Phan so khong hop le!" << endl;
      i--;
      continue;
    }
    RutGon(a[i]);
  }
}

void XuatMang(PHANSO a[], int n) {
  for (int i = 0; i < n; i++) {
    Xuat(a[i]);
  }
}

PHANSO TimMax(PHANSO a[], int n) {
  PHANSO max = a[0];
  for (int i = 1; i < n; i++)
    if (LonHon(a[i], max))
      max = a[i];
  return max;
}

void SapXepTang(PHANSO a[], int n) {
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if (!LonHon(a[i], a[j]))
        swap(a[i], a[j]);
}

void SapXepGiam(PHANSO a[], int n) {
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if (LonHon(a[i], a[j]))
        swap(a[i], a[j]);
}
