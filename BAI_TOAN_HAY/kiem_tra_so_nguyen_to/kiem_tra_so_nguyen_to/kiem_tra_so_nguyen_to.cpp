//kiểm tra số nguyên tố
#include"pch.h"
#include<iostream>
using namespace std;
int main() {
	int n, i = 2;
	while (1) {
		cout << "enter the natural value of n: ";
		cin >> n;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else if (n > 0) {
			break;
		}
	}
	if (n == 1) {
		cout << "1 khong la so nguyen to";
	}
	else if (n == 2) {
		cout << "2 la so nguyen to";

	}
	else {
		while (1) {
			if ((n%i) != 0) {
				i++;
			}
			else { break; }
		}


		if (n == i) {
			cout << n << " la so nguyen to";
		}
		else {
			cout << n << "khong la so nguyen to";
		}
	}
	return 0;
}
