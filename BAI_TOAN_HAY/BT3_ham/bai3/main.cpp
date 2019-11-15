/*viết hàm kiểm tra số chính phương*/
#include <iostream>
#include <cmath>
using namespace std;
bool kt(int x)
{
	int s;
	s = sqrt(x);
	if (pow(s, 2) == x)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	while (1)
	{
		cout << "nhap so nguyen n > 0: ";
		cin >> n;
		if (n > 0) break;
	}
	if (kt(n))
	{
		cout << "true";
	}
	else
		cout << "false";
	return 0;
}