#pragma once
#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
	friend void sapXep(SinhVien[], int);
private:
	string maSV, name;
	double diemToan, diemVan, diemAnh;
public:
	SinhVien(void);//khởi tạo mặc định
	SinhVien(string, string, double,double,double);//khởi tạo có tham số
	SinhVien(const SinhVien&);//khởi tạo sao chép
	~SinhVien(void);//hàm hủy
	void nhap(void);
	void xuat(void); 
	double diemTb()
	{
		return (diemToan + diemVan + diemAnh) / 3;
	}
	SinhVien operator +(SinhVien);
};
void nhap(SinhVien[], int);//nhap danh sách các sinh viên
void xuat(SinhVien[], int);


