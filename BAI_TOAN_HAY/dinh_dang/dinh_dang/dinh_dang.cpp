#include "pch.h"
#include<iomanip>
#include<iostream>
using namespace std;
int main() {
	cout << setw(5) << left << "stt";
	cout << setw(20) << left << "ten";
	cout << setw(30) << right << "dia chi" << endl;

	cout << setfill('-') << setw(56) << " " << endl;
	cout << setfill(' ');
	cout << setw(5) << left << "01";
	cout << setw(20) << left << "manh nguyen";
	cout << setw(30) << right << "phu tho" << endl;
	cout << setw(5) << left << "02";
	cout << setw(20) << left << "van anh";
	cout << setw(30) << right << "phu tho" << endl;


	return 0;
}