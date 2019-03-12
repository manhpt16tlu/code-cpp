#include"pch.h"
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "hello,cung thuc hien cau truc re nhanh:!\n";
	cout << "nhap so nguyen a:";
	cin >> a;
	cout << "nhap so nguyen b:\n";
	cin >> b;
	if (a > b){
		cout << "a>b";}
	else if (a < b) {
		cout << "a<b";
	}
	else { cout << "a=b"; }
	return 0;
}
