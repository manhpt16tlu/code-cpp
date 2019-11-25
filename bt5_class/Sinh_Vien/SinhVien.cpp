#include "SinhVien.h" 

SinhVien::SinhVien(void)
{
	this->maSV = "1851061761";
	this->name = "nguyen van manh";
	this->diemToan = 10;
	this->diemVan = 10;
	this->diemAnh = 10;
}
SinhVien::SinhVien(string m, string n, double dt,double dv,double da)
{
	this->maSV = m;
	this->name = n;
	this->diemToan = dt;
	this->diemVan = dv;
	this->diemAnh = da;
}
SinhVien::SinhVien(const SinhVien &a)
{
	this->maSV = a.maSV;
	this->name = a.name;
	this->diemToan = a.diemToan;
	this->diemVan = a.diemVan;
	this->diemAnh = a.diemAnh;
}
SinhVien::~SinhVien(void)
{
}
void SinhVien::nhap(void)
{

	cin.ignore(32767, '\n');
	cout << "nhap ma SV: ";
	getline(cin, maSV);
	cout << "nhap ten SV: ";
	getline(cin, name);
	cout << "nhap diem toan: ";
	cin >> diemToan;
	cout << "nhap diem van: ";
	cin >> diemVan;
	cout << "nhap diem anh: ";
	cin >> diemAnh;
	cout << endl;
}
void SinhVien::xuat(void)
{
	cout << endl << endl;
	cout << maSV << " " << name << endl; 
	cout << "Toan:" << diemToan << " Van:" << diemVan << "Anh:" << diemAnh << endl;
}
void nhap(SinhVien s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap thong tin sinh vien " << i + 1 << endl;
		s[i].nhap();
	}
}
void xuat(SinhVien s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		s[i].xuat();
	}
}
void sapXep(SinhVien s[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i].diemTb < s[j].diemTb)
			{
				SinhVien a = s[i];
				s[i] = s[j];
				s[j] = a;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << s[i].name << endl;
	}
}