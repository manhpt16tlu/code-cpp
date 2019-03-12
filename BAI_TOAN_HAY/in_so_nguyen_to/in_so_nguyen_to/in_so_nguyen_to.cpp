//in  số nguyên tố
#include"pch.h"
#include<iostream>
using namespace std;
int main() {
	cout << "cac so nguyen to tu 0 den 117 \n";
	for(int n=2;n<;n++){
		int i = 2;
		
		while (1) {
			if ((n%i) != 0) {
				i++;
			}
			else {
				break; }
			
		}
      if (n == i) {
			cout << n <<" ";
		}
	}
	return 0;
}
