//in số chẵn,lẻ từ một mảng
#include"pch.h"
#include<iostream>
#define number 5
using namespace std;
int main() {
	
	int a[number];
	for (int i = 0; i < number; i++) {
		cout << "enter the next value: ";
		cin >> a[i];
	}
	for (int i = 0; i < number; i++)
	{
		if (a[i] % 2 == 0) {
			continue;}
		else {
			cout << a[i]<<" ";
		}
	}
	return 0;
}