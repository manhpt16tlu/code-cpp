#include"pch.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
#define col 3
#define row 2
using namespace std;
int main() {
	int a[2][3];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
	
}