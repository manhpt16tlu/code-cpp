//tìm kiếm phần tử trong mảng sinh số ngẫu nhiên 
#include"pch.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
#define number 6
using namespace std;
int main() {
	int x;
	int a[number];
	srand(time(NULL));
	for (int i = 0; i < number; i++) {
		a[i] = rand() % 1000 + 1;
	}
	for (int i = 0; i < number; i++) {
		cout << "a[" << i << "]=" << a[i] << endl;
	}
	cout << "nhap x:";
	cin >> x;
	for (int i = 0; i <= number; i++) {
		if (a[i] == x) {
			cout << i;
			break;
		}
		if (i == number) {
			cout << "k";
		}
	}
	return 0;
}