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
PHANSO LonNhat(PHANSO, PHANSO);
int SoSanh(PHANSO, PHANSO);

int main() {
  PHANSO ps1, ps2;

  cout << "Nhap phan so thu nhat: " << endl;
  Nhap(ps1);
  cout << "Phan so vua nhap la: ";
  Xuat(ps1);

  cout << "Nhap phan so thu hai: " << endl;
  Nhap(ps2);
  cout << "Phan so vua nhap la: ";
  Xuat(ps2);

  if (!KiemTraPhanSoHopLe(ps1)) {
    cout << "Phan so thu nhat khong hop le!" << endl;
  } else if (!KiemTraPhanSoHopLe(ps2)) {
    cout << "Phan so thu hai khong hop le!" << endl;
  } else {
    PHANSO max = LonNhat(ps1, ps2);
    cout << "Phan so lon nhat la: ";
    Xuat(max);
  }

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

int SoSanh(PHANSO x, PHANSO y) {
  float gt1 = (float)x.Tu / x.Mau;
  float gt2 = (float)y.Tu / y.Mau;

  if (gt1 > gt2) {
    return 1;
  } else if (gt1 < gt2) {
    return -1;
  } else {
    return 0;
  }
}

PHANSO LonNhat(PHANSO x, PHANSO y) {
  if (SoSanh(x, y) > -1) {
    return x;
  }
  return y;
}
