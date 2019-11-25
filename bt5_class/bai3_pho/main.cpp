#include "Pho.h"

int main()
{
	int n;
	cout << "nhap so bat pho: ";
	cin >> n;
	Pho *a = new Pho[n];
	nhap(a, n);
	xuat(a, n);
	cout << "bat pho gia cao nhat:";
	max(a, n);
	return 0;
}