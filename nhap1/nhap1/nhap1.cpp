#include"pch.h"
#include<iostream>
using namespace std;
int main() {
	int n, s=0;
	
	cin >> n;
	for (int i = 0; i < n; i += 2) {
		s += i;
	}
	cout << s;
	return 0;
}