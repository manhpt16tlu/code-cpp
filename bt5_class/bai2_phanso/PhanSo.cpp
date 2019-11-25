#include "PhanSo.h"
PhanSo::PhanSo(void)// khởi tạo mặc định
{
	x = 1;
	y = 1;
}
PhanSo::PhanSo(int a, int b)// khởi tạo có tham số
{
	x = a;
	y = b;
}
PhanSo::PhanSo(const PhanSo &a)// khởi tạo sao chép(sử dụng với con trỏ)  
{
	x = a.x;
	y = a.y;
}
PhanSo::~PhanSo(void)
{//hàm hủy 
}
void PhanSo::nhap(void)
{
		cout << "nhap tu so: ";
		cin >> x;
		cout << "nhap mau so: ";
		cin >> y;
}

void PhanSo::xuat(void)
{
	cout << x << "/" << y << endl;
}
PhanSo PhanSo::cong(PhanSo p)
{
	PhanSo s(x * p.y + p.x * y, y * p.y);
	return s;
}
PhanSo PhanSo::operator+(PhanSo p)
{
	PhanSo s(x * p.y + p.x * y, y * p.y);
	return s;
}
PhanSo PhanSo::operator+(int p)
{
	PhanSo p1(p, 1);
	return *this + p1;
}