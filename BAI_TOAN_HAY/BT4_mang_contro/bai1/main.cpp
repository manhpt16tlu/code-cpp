/*bài tập hàm với contro */
#include <iostream>
using namespace std;
void nhapMang(int *s,int n)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << "nhap: ";
		cin >> *(s + i);
	}


}
void xuatMang(int *s,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(s + i) << " ";
	}
	cout << endl;
}
void doiCho(int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
}
void tangDan(int *s,int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(s + i) > * (s + j))
			{
				doiCho(*(s + i) , *(s + j));
			}
		}
	}
}
void giamDan(int *s, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(s + i) < * (s + j))
			{
				doiCho(*(s + i), *(s + j));
			}
		}
	}
}
int max(int *s, int n)
{
	int m = *s;
	for (int i = 1; i < n; i++)
	{
		if (*(s + i) > m)
		{
			m = *(s + i);
		}
	}
	return m;
}
int min(int *s, int n)
{
	int m = *s;
	for (int i = 1; i < n; i++)
	{
		if (*(s + i) < m)
		{
			m = *(s + i);
		}
	}
	return m;

}
//hàm đếm số lần xuất hiện của phần tử trong mảng
int dem(int *s, int n,int x)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (x == *(s + i))
		{
			d++;
		}
	}
	return d;
}
//in ra giá trị xuất hiện nhiều nhất trong mảng
void  demMax(int *s, int n)
{
	int max(*s), dmax(dem(s, n, *s));
	for (int i = 1; i < n; i++)
	{
			if (dem(s,n,*(s + i)) > dmax)
			{
				dmax = dem(s, n, *(s + i));
				max = *(s + i);
			}
	}
	cout << max << " " << dmax;
}
int main()
{
	int n;
	cout << "nhap so phan tu cua mang: ";
	cin >> n;
	int *a = new int[n];
	nhapMang(a, n);
	//xuatMang(a, n);
	//tangDan(a, n);
	//xuatMang(a, n);
	//giamDan(a, n);
	//xuatMang(a, n);
	cout << max(a, n) << " " << min(a, n) << endl;
	demMax(a, n);
}
