//đếm các chữ số
#include"pch.h"
#include<iostream>
//#include<string>
using namespace std;
int main() {
	int n;
	while (1) {
		cout << "enter the natural value of n: ";
		cin >> n;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else if (n >= 0) {
			 int a = n;
			int i = 0;
			while (1){ 
				n /= 10;
				i++;
				if (n==0)
				{
					
					cout << a << " co " << i << " chu so";
					break;
				}
			
			}
			break;
			
		}
	}
	return 0;
}