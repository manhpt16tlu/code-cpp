#include "TPoint.h"

int main()
{
	TPoint diem1, diem2, diem3;
	cout << "nhap toa do diem A: " << endl;
	diem1.nhap();
	cout << "nhap toa do diem B: " << endl;
	diem2.nhap();
	cout << "nhap toa do diem C: " << endl;
	diem3.nhap();
	cout << "A: ";
	diem1.xuat();
	cout << "B: ";
	diem2.xuat();
	cout << "C: ";
	diem3.xuat();
	double d1, d2, d3;
	d1 = diem1.KhoangCach(diem2);
	d2 = diem1.KhoangCach(diem3);
	d3 = diem2.KhoangCach(diem3);



}