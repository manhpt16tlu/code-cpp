//tính tổng n số(không dùng mảng)
#include"pch.h"
#include<iostream>
using namespace std;
int main() {
	int a, n;
	cout << "nhap n:";
	cin >> n;
	cout << endl;
	int s =0,s1=0;
	for (int i = 1; i <= n; i++) {
		cout << " nhap a: ";
		cin >> a;
		if ((a % 2) == 0) {
			s  +=a;
		}
		else {
			s1 += a;
		}
	}
	cout << "tong cac so chan:" << s << endl;
	cout << "tong cac so le: " << s1 << endl;
	return 0;
}
