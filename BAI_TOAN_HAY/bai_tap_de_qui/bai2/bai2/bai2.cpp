//tính tổng s=1^2+2^2+..+n^2
#include"pch.h"
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, i = 1, s = 0;
	cout << "nhap n:";
	cin >> n;
	while (i <= n) {
		s += pow(i++, 2);
	}
	cout << s;
	return 0;
}