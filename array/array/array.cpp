#include"pch.h"
#include<iostream>
#define number 6
using namespace std;
int main() {
	int n, j;
	cout << "array in C plus plus\n";
	int a[number];
	cout << "enter the value of array element\n";
	for (int i = 0; i < number; i++) {
		cout << "next value  ";
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	cout << "your array: ";
	for (int i = 0; i < number; i++) {

		cout << a[i]<<"  ";
	}
	


	return 0;

}