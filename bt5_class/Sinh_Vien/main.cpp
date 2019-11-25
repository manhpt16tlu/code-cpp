#include "SinhVien.h"

int main()
{
	int n;
	cout << "nhap so sinh vien: ";
	cin >> n;
	SinhVien* a = new SinhVien[n];
	nhap(a, n);
	xuat(a, n);
	cout << "danh sach sinh vien diem cao nhat: ";
	sapXep(a, n);
}