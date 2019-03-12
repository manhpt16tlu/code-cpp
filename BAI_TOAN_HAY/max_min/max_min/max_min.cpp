//tìm max min
#include"pch.h"
#include<iostream>
using namespace std;
int main(){
	int n, i = 0, a, max = 0;
    cout << "nhap n:";
	cin >> n;
	cout << endl;
	while (1) {
		i += 1;
		cout << "nhap a:";
		cin >> a;
		if (a > max) {
			max = a;
	  }
		if (i == n) {
			cout << max;
			break;

		}

	}
    return 0;
}