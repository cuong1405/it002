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
int XetDau(PHANSO);

int main() {
  PHANSO ps;

  Nhap(ps);

  if (!KiemTraPhanSoHopLe(ps)) {
    cout << "Phan so vua nhap khong hop le!" << endl;
  } else {
    if (XetDau(ps) == 1) {
      cout << "Phan so duong." << endl;
    } else if (XetDau(ps) == -1) {
      cout << "Phan so am." << endl;
    } else {
      cout << "Phan so bang 0." << endl;
    }
  }

  return 0;
}

void Nhap(PHANSO &x) {
  cout << "Nhap phan so: " << endl;

  cout << "Nhap tu so: ";
  cin >> x.Tu;

  cout << "Nhap mau so: ";
  cin >> x.Mau;
}

void Xuat(PHANSO x) {
  cout << "Phan so vua nhap la: ";
  cout << x.Tu << "/" << x.Mau << endl;
}

bool KiemTraPhanSoHopLe(PHANSO x) {
  if (x.Mau == 0) {
    return false;
  }

  return true;
}

int XetDau(PHANSO x) {
  if (x.Tu * x.Mau > 0) {
    return 1;
  }

  if (x.Tu * x.Mau < 0) {
    return -1;
  }

  return 0;
}
