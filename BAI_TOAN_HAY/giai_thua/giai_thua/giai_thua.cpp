//tính n!
#include"pch.h"
#include<iostream>
#include<string>
using namespace std;
int main() {
int n,s=1;
cout << "hello,let calculate n factorial\n";
while (1) {
		cout << "enter the value of n:";
		cin >> n;
		cout << endl;
	if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
		}
	else if (n == 0) {
			cout <<"0!=1";
		    break;
		}
	else if (n > 0) {
		for (int j = 1; j <= n; j++)
		{
			s *= j;
		}
			cout << n << "!=" << s;
	        break;
		}
	}
	
	return 0;
} 