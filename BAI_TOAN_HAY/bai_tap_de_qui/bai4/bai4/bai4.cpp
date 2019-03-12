//tính tổng s=1/2+1/4/...+1/2n
#include"pch.h"
#include<iostream>
using namespace std;
int main() {
	float n, i = 2,s = 0;
	cout << "nhap n:";
	cin >> n;
	while (i<=n) {
		s += (1 / i);
		i *= 2;
	}
	cout << s;
	return 0;
}