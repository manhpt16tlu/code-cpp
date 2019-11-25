#include "Pho.h"

Pho::Pho(void)
{
	thit = 0.8;
	banhPho = 1;
	hanh = 0, 2;
}
Pho::Pho(double t, double bp, double h)
{
	thit = t;
	banhPho = bp;
	hanh = h;
}
Pho::Pho(const Pho &a)
{
	thit = a.thit;
	banhPho = a.banhPho;
	hanh = a.hanh;
}
Pho::~Pho(void)
{
};
void Pho::nhap(void)
{
	cout << "nhap thit: ";
	cin >> thit;
	cout << "nhap banh pho: ";;
	cin >> banhPho;
	cout << "nhap hanh: ";
	cin >> hanh;
}
void Pho::xuat(void)
{
	cout << "(" << thit << "," << banhPho << "," << hanh << ")" << endl;
}
double Pho::tinhTien()
{
	return (thit * 15000 + banhPho * 10000 + hanh * 2000);
}
void nhap(Pho s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap bat pho: " << i + 1 << endl;
		s[i].nhap();

	}
}
void xuat(Pho s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		s[i].xuat();
	}
}
void max(Pho s[], int n)
{
	double max = s[0].tinhTien();
	int j;
	for (int i = 0; i < n; i++)
	{
		if (s[i].tinhTien() > max)
		{
			max = s[i].tinhTien();
			j = i + 1;
		}
	}
	cout << j << "-" << max;
}
