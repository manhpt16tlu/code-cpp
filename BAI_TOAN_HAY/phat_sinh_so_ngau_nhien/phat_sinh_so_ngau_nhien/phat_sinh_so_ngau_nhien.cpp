//phát sinh số ngẫu nhiên
#include"pch.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		int a = rand() % 10 + 2;
		cout << a<<" ";
	}
return 0;
}