/*hàm tạo trong c++*/
#include <iostream>
#include <string>
using namespace std;
class HocSinh
{
private:
	string ten;
	double diem;
public:
	void xuat()
	{
		cout << "TEN: " << ten << endl;
		cout << "DIEM: " << diem;
	}
	HocSinh()
	{//hàm khởi tạo mặc định
		ten = "manh";
		diem = 6.9;
	}
	HocSinh(string name,double d)
	{
		//khởi tạo có tham số đầu vào
		ten = name;
		diem = d;
	}
};
int main()
{
	HocSinh hs1("ironman",6.9);
	hs1.xuat();
	return 0;
}