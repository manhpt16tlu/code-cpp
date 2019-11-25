#include "TPoint.h"
//hàm khởi tạo mặc định
TPoint::TPoint(void)
{
	x = 0;
	y = 0;
}
//khởi tạo có tham só
TPoint::TPoint(int a,int b)
{
	x = a;
	y = b;

}
//khởi tạo sao chép
/*TPoint::TPoint(const TPoint& a)
{
	x = a.x;
	y = a.y;
}*/
//hàm hủy
TPoint::~TPoint()
{ 
}
void TPoint::nhap()
{
	cout << "nhap hoanh do: ";
	cin >> x;
	cout << "nhap tung do: ";
	cin >> y;
}
void TPoint::xuat()
{
	cout << "(" << x << "," << y << ")" << endl;
}
int TPoint::hd()
{
	return x;
}
int TPoint::td()
{
	return y;
}
double TPoint::KhoangCach(TPoint d)
{
	return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
}
