//kiểm tra số đối xứng 
#include"pch.h"
#include<iostream>
using namespace std;
int main() {
	int n,a,s=0;
	while (1) {
		cout << "nhap so tu nhien n<>0:";
		cin >> n;
		a = n;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else if (n > 0)
		{
			while (1) {
				s = s * 10 + (n % 10);
				n /= 10;
				if (n == 0) {				
					if (s == a) {
						cout << "doi xung";
					}
					else {
						cout << "khong doi xung";
					}
					break;
				}
			}
				break;
				
			}
		}
	
	return 0;
}