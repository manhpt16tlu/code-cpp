#pragma once
#include<iostream>
using namespace std;

class PhanSo
{
private:
	int x, y;
public:
	PhanSo(void);//hàm khởi tạo mặc định
	PhanSo(int, int);//khởi tạo có tham số
	PhanSo(const PhanSo &);// khởi tạo sao chép
	~PhanSo(void);//hàm hủy
	void nhap(void);//hàm nhập
	void xuat(void);//hàm xuất
	PhanSo cong(PhanSo);//hàm cộng hai phân số thường
	PhanSo operator +(PhanSo);// nạp chồng toán tử cộng hai phân số
	PhanSo operator +(int);// nạp chồng toán tử cộng phân số với số nguyên
};

