//chương trình tính tuổi 
#include"pch.h"
#include<iostream>
#include<string>
using namespace std;
int main() 
{
	int year;
	cout << "hello,let calculate your age!\n";
	while (1){
		cout << "enter the value your year of birth:";
		cin >> year;
		if (cin.fail()) {
			cout << "oh no!you have entered wrong \n";
			cin.clear();
			cin.ignore(32676, '\n');
		}
		else if ((year>0)&&(year<2019)) {
			break;
		}
}
	cout << "your age:" << 2019 - year;
	return 0;
}