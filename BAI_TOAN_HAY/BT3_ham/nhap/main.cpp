#include <iostream>
using namespace std;
void nhap(int *s,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " nhap : ";
		cin >> s[i];
	}
}
void xuat(int s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << " ";
	}
}
int  dem(int s[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == x)
			dem++;
	}
	return dem;
}
int main()
{
	int n;
	cout << "nhap so phan tu cua mang: ";
	cin >> n;
	int* a = new int[n];
	nhap(a, n);
	xuat(a, n);
	int max = a[0], dmax = dem(a, n, a[0]);
	for (int i = 0;i < n;i++)
	{ 
		if (dem(a, n, a[i]) > dmax)
		{
			dmax = dem(a, n, a[i]);
			max = a[i];
		}
	}
	cout << endl;
	cout << "phan tu xuat hien nhieu nhat: " << max;

	
}