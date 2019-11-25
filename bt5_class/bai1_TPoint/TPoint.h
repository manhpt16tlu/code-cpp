#pragma once
#include<iostream>
#include <cmath>
using namespace std;
class TPoint
{
private:
	int x, y;
public:
	TPoint(void);//hàm tạo mặc định
	TPoint(int ,int );//hàm khởi tạo có tham số
	~TPoint(void);//hàm hủy
	//TPoint(const TPoint&);//khởi tạo sao chép
	void nhap();
	void xuat();
	int td();
	int hd();
	double KhoangCach(TPoint);
};

