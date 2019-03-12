//tính tổng s=1+1/2+1/3+...+1/n
#include"pch.h"
#include<iostream>
using namespace std;
int main() {
 float n, i = 1,s=0;
	cout << "nhap n:";
	cin >> n;
	while (i <= n) {
            s+=(1 / i++);
	}
	cout << s;
	return 0;
}