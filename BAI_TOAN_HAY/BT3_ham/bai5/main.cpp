/*kiểm tra số amstrong*/
#include <iostream>
#include <cmath>
using namespace std;
int count(int x)
{
	int dem = 0;
	while (x != 0)
	{
		x /= 10;
		dem++;
	}

	return dem;
}
bool kt(int x)
{
	int y = x, s = 0, k = count(x);
	while (x != 0)
	{
		s += pow (x % 10,k);
		x /= 10;
		
	}
	if (s == y)
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
	for (int i = 0; i < n; i++)
	{
		if (kt(i)) cout << i << endl;
	}

}