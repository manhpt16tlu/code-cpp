//tìm max min của 1 mảng
#include "pch.h"
#include <iostream>
#define number 5
using namespace std;
int main() {
	int max, min;
	cout << "hello,let find  the max,min number\n";
	int a[number];
	cout << "this array have " << number << " element \n";
	cout << "enter the value of array element \n";
	for (int i = 0; i < number; i++) {
		cout << "enter the next value: ";
		cin >> a[i];
	}
	cout << "your array: ";
	min= a[0];
	max = a[0];
	for (int i = 0; i < number; i++) {
		cout << a[i] << "  ";
		if (a[i] > max){
			max = a[i];

		}
		if (a[i] < min) 
		{ 
			min = a[i];
		}
	}
	cout << endl;
	cout <<"min element:"<<min << endl;
	cout << "max element:" <<max<< endl;

	return 0;
}