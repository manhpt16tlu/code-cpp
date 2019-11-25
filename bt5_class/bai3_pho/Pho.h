#pragma once
#include <iostream>
using namespace std;

class Pho
{
private:
	double thit, banhPho, hanh;//thịt,bánh phở,hành
public:
	Pho(void);//khởi tạo mặc định
	Pho(double, double, double);//khởi tạo có tham số
	Pho(const Pho &);//khởi tạo sao chép
	~Pho(void);//hàm hủy
	void nhap(void);//hàm nhập
	void xuat(void);//hàm xuất
	double tinhTien(void);//tính tiền 1 bát phở
};
void nhap(Pho[], int);//nhập 10 bát phở
void xuat(Pho[], int);
void max(Pho[], int);//bát phở đắt nhất


