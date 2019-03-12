//tính tổng 1+2+3+....+n
#include"pch.h"
#include<iostream>
using namespace std;
int main(){
	int n, i = 1, s = 0;
	cout << "nhap n:";
	cin >> n;
	while(i<=n){
		s += i++;
	}
	cout << s;
	return 0;
}