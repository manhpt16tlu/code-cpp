/*kiểm tra số hoàn chỉnh */
#include <iostream>
using namespace std;
bool kt(int x)
{
	int s = 1;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			s += i;
		}
	}
	if (s == x)
		return 1;
	else
		return 0;

}
int main()
{
	int n;
	while (1)
	{
		cout << "nhap so nguyen duong n > 0: ";
		cin >> n;
		if (n > 0)
			break;
	}

	if (kt(n))
		cout << "true";
	else
		cout << "false";
}