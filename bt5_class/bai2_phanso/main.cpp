#include "PhanSo.h"

int main()
{
	PhanSo ps1, ps2,ps3;
	cout << "nhap phan so 1: " << endl;
	ps1.nhap();
	cout << "nhap phan so 2: " << endl;
	ps2.nhap();
	cout << "nhap phan so 3: " << endl;
	ps3.nhap();
	ps1.xuat();
	ps2.xuat();
	ps3.xuat();
	PhanSo t = ps1 + ps2 + ps3;
	t.xuat();
	PhanSo t1 = ps1 + 3 + ps2;
	t1.xuat();
	return 0;
}