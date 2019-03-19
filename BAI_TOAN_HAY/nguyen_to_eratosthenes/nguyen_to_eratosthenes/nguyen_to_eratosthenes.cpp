//sàng số nguyên tố
#include"pch.h"
#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
void eratos(int n)
{
	bool a[1000];
	for (int i = 0; i <n; i++)
	{
		a[i] = 1;
	}
	for (int i = 2; i < sqrt(n); i++)
	{
		if (a[i] == 1)
		{
			for (int j = 2 * i; j < n; j += i)
			{
				a[j] = 0;
			}
		}
	}
	for (int i = 2; i < n; i++)
	{
		if (a[i] == 1)
		{
			cout << i << " ";
		}
	}
}
int main()
{   
	int n;
	cout << "nhap n:";
	cin >> n;
	eratos(n);
	return 0;
}