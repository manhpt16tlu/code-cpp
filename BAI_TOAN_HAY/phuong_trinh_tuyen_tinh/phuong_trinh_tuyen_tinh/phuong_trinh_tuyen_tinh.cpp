//giải phương trình tuyến tính
#include"pch.h"
#include<iostream>
using namespace std;
int main() {
	int a, b;
	float x;
	cout << "let solve linear equation!\n";
	cout << "ax+b=0\n";
	while (1) {
		cout << "enter the value of a:";
		cin >> a;
		if (a != 0) {
			cout << "enter the value of b:";
			cin >> b;
			x = (-b) / a;
			cout << "x="<<x;
			break;
		}
	}
	return 0;
}