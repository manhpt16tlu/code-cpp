#include "pch.h"
#include<iostream>
using namespace std;
void ham1() {
	cout << "hello day la ham 1\n";
}
int ham2() {
	int  x = 5;
	cout << x + 10<<"\n";
	return 0;
}
void ham3(int a){
	cout << "a=" << a << endl;

}
int ham4(int x,int y) {
	cout << x + y;
	return 0;
}
int main()
{      
	cout << "ham trong c plus plus\n";
	ham1();
	ham2();
	ham3(10);
	ham4(1, 2);
		return 0;
}