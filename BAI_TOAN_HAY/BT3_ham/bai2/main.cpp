/*viết hàm kiểm tra số nguyên tố*/
#include <iostream>
using namespace std;
bool kt(int x)
{
	if (x < 2)
	{
		return 0;
	}
	else
	{
		int i = 2;
		while (1)
		{
			if (x % i != 0)
			{
				i++;
			}
			else
			{
				break;
			}
			
		}
		if (i == x)
		{
			return 1;
		}
		else
			return 0;
	}
}
int main()
{
	int n;
	while (1)
	{
		cout << "nhap so 0 < n: ";
		cin >> n;
		if (n > 0) break;
	}
	if (kt(n))
	{
		cout << n << " la so nguyen to";
	}
	else
		cout << n << " khong phai so nguyen to";
}