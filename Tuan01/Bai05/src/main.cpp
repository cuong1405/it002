#include <iostream>
using namespace std;

struct sophuc {
  float Thuc;
  float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC &);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);

int main() {
    SOPHUC sp1, sp2;

    cout << "Nhap so phuc thu nhat: " << endl;
    Nhap(sp1);

    cout << "Nhap so phuc thu hai: " << endl;
    Nhap(sp2);

    cout << "Tong hai so phuc: ";
    Xuat(Tong(sp1, sp2));

    cout << "Hieu hai so phuc: ";
    Xuat(Hieu(sp1, sp2));

    cout << "Tich hai so phuc: ";
    Xuat(Tich(sp1, sp2));

  return 0;
}

void Nhap(SOPHUC &x) {
    cout << "Nhap phan thuc: ";
    cin >> x.Thuc;

    cout << "Nhap phan ao: ";
    cin >> x.Ao;
}

void Xuat(SOPHUC x) {
    cout << x.Thuc << " + " << x.Ao << "i" <<  endl;
}

SOPHUC Tong(SOPHUC a, SOPHUC b) {
    SOPHUC kq;

    kq.Thuc = a.Thuc + b.Thuc;
    kq.Ao = a.Ao + b.Ao;

    return kq;
}

SOPHUC Hieu(SOPHUC a, SOPHUC b) {
    SOPHUC kq;

    kq.Thuc = a.Thuc - b.Thuc;
    kq.Ao = a.Ao - b.Ao;

    return kq;
}

SOPHUC Tich(SOPHUC a, SOPHUC b) {
    SOPHUC kq;

    kq.Thuc = a.Thuc * b.Thuc - a.Ao * b.Ao;
    kq.Ao = a.Thuc * b.Ao + a.Ao * b.Thuc;

    return kq;
}
