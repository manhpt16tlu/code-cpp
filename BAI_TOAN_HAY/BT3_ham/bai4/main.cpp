/*kiểm tra số đối xứng*/
#include <iostream>
using namespace std;
bool kt(int x)
{
	int y = x;
	int s = 0;
	while (x != 0)
	{
		s = s * 10 + x % 10;
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
	cout << "nhap so nguyen n: ";
	cin >> n;
	if (kt(n))
	{
		cout << "true";
	}
	else
		cout << "false";

	return 0;
}