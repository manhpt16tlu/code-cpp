#include"pch.h"
#include<iostream>
#include <string>
using namespace std;
int main() {
/*	int a(1);
	while (a <= 20) {

		int b(1);
		while (b<=a){
		cout << b<<" ";
		b++;
	}
	a++;
	cout << endl;
}*/
int x;
while (1) {
	cout << "nhap x:";
	cin >> x;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	if (x > 0) {
		break;

	}
}
		return 0;
	/*}
	int count(0);
	do
	{
		cout << count++ << ",";
	} while (count<10);*/
	
}