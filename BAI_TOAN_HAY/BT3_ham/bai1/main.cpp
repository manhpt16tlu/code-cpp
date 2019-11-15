/*dùng nạp chồng hàm tạo ra 2 hàm cùng tên*/
#include <iostream>
using namespace std;
void nhapx(int n,int &m)
{
	while (1)
	{
		cout << "nhap so 0 < x < n: ";
		cin >> m;
		if ((m > 0) && (m < n))
			break;

	}
	


}
void nhapx(int n,double &m)
{
	while (1)
	{
		cout << "nhap so 0 < x < n: ";
		cin >> m;
		if ((m > 0) && (m < n))
			break;

	}

}
int main()
{
	int n,x;
	double y;
	cout << "nhap so nguyen n: ";
	cin >> n;
	nhapx(n,x);
	cout << x;

	return 0;
}