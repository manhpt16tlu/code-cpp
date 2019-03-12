//sắp xếp các phần tử của mảng
#include"pch.h"
#include<iostream>
using namespace std;
#define number 100
int main() {
	int n,t;
	int a[number];
	cout << "nhap so phan tu cua mang :";
	cin >> n;
	for (int i = 0; i <n; i++) {
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	cout << "mang cua ban:";
	for (int i = 0; i < n; i++) {
		cout << " " << a[i];
	}
	for (int i = 0; i < (n - 1); i++) {
		for (int j = i+1; j < n;j++) {

			if (a[i] > a[j]) {
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	cout << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
			
		
	
	return 0;
}