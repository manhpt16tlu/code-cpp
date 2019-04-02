//các bài toán mảng 1 chiều với hàm
//author:Mạnh Nguyễn
#include"pch.h"
#include<iostream>
using namespace std;
//1-hàm nhập các giá trị của mảng
void nhapMang(int b[],int s[],int clone1[],
	          int clone2[],int clone3[], int clone4[],
	          int clone5[], int clone6[], int clone7[], int clone8[],
	          int n )
{	
	
	for (int i = 0; i < n; i++)
	{
		cout<<"Enter the next value:";
		cin >> b[i];
		s[i]= b[i];
		clone1[i] = b[i];
		clone2[i] = b[i];
		clone3[i] = b[i];
		clone4[i] = b[i];
		clone5[i] = b[i];
		clone6[i] = b[i];
		clone7[i] = b[i];
		clone8[i] = b[i];
	}

}
//2-hàm in ra các giá trị của mảng
void xuatMang(int c[],int n)
{
	cout << "Your array:";
	for (int i = 0; i < n; i++)
	{
		cout << c[i] << ",";
	}
	cout << endl << endl << endl;

}
//3-hàm tìm giá trị lớn nhất và nhỏ nhất
void maxMin(int h[],int n)
{
	int max=0, min = h[0];
	for (int i = 0; i < n; i++)
	{
       if (h[i]>max)
	   {
		   max = h[i];
	   }
	   if (h[i] < min)
	   {
		   min = h[i];
	   }
    }
	cout << "Gia tri lon nhat:" << max << endl;
	cout << "Gia tri nho nhat:" << min << endl;
}
//4-hàm sắp xếp 
void tangDan(int d[],int n)
{   
	int t;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (d[i]>d[j])
			{
				t = d[i];
				d[i] = d[j];
				d[j] = t;
			}
		}
	}
	cout << "Mang cua ban sau khi sap xep tang dan:";
	for (int i = 0; i < n; i++)
	{
		cout << d[i] << ",";
	}
	cout << endl;

}
void giamDan(int d[], int n)
{
	int t;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (d[i] < d[j])
			{
				t = d[i];
				d[i] = d[j];
				d[j] = t;
			}
		}
	}
	cout << "Mang cua ban sau khi sap xep giam dan:";
	for (int i = 0; i < n; i++)
	{
		cout << d[i] << ",";
	}
	cout << endl << endl << endl;
}
//5-hàm tìm kiếm 
void timKiem(int e[], int n)
{
	int x, count = 0;
	cout << "--Day la ham tim kiem!--" << endl;
	cout << "Nhap gia tri can tim kiem:";
	cin >> x;
	cout << x << " o vi tri:";
	for (int i = 0; i < n; i++)
	{
		if (e[i] == x)
		{
			count++;
			cout<< i + 1;
		}
	}
		if (count == 0) cout << "Khong tim thay ";
		cout << endl;
}
//6-hàm xóa vị trí thứ k
void del(int g[],int n)
{   
	int k;
	cout << "--Day là ham xoa vi tri k!" << endl;
	cout << "Nhap vi tri thu k:";
	cin >> k;
	cout << "Mang sau khi xoa vi tri thu " << k << "la :";
	for (int i = k-1; i < n - 1; i++)
	{
		g[i] = g[i + 1];
	}
	n--;
	for (int i = 0; i < n; i++)
	{
		cout << g[i] << ",";
	}
	cout << endl << endl << endl;
}
//7-hàm chèn giá trị x vào vị trí k
void insert(int h[],int  n)
{
	int x, k;
	cout << "--Day la ham chen!" << endl;
	cout << "Nhap vi tri can chen:";
	cin >> k;
	cout << "Nhap gia tri can chen:";
	cin >> x;
	for (int i = n; i >k-1 ; i--)
	{
		h[i] = h[i - 1];
	}
	h[k - 1] = x;
	for (int i = 0; i <= n; i++)
	{
		cout << h[i] << ",";
	}
	cout << endl;
}
//8-ham in ra các số lớn hơn x nhập từ bàn phím
void timKiem1(int arr[], int n)
{
	int x;
	cout << "--Day la ham in cac so >=x!--" << endl;
	cout << "Nhap gia tri x:";
	cin >> x;
	cout << "Cac so >= " << x << " o trong mang la:";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= x)
		{
			cout << arr[i] << ",";
	    }
	}
	cout << endl << endl;

}
//-9 tìm và xóa các phần tử có giá trị x trong mảng
void del1(int arr[], int n)
{   
	int x,z=0,i=0,m=n;//khai báo thêm biến m vì trong hàm này n sẽ thay đổi giá trị
	cout << "Day la ham xoa cac gia tri x!" << endl;
	cout << "Nhap gia tri x:";
	cin >> x;
	cout << "Mang sau khi xoa la:";
    while (i<n)
	{
		if (arr[i] == x)			
			{
				for (int j = i; j < n - 1; j++)
				{
					arr[j] = arr[j + 1];
				}
				n--;
			}
		
		else i++;
		

	}
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
}
//-10 hàm tìm số lớn thứ 2 trong mảng
void max2(int arr[],int n)
{
	int max = arr[1];
	cout << "--Day la ham tim so lon thu hai trong mang!--";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];			
		}
	}
	

}
//hàm main
int main()
{
	int n,x,k;
	cout << "Enter the length of your array:";
	cin >> n;
	int *a = new int[n];
	int *s = new int[n];
	int *clone1 = new int[n + 1];//vì mảng này để chèn thêm phần tử nên có n+1 phần tử
	int *clone2 = new int[n];
	int *clone3 = new int[n];
	int *clone4 = new int[n];
	int *clone5 = new int[n];
	int *clone6 = new int[n];
	int *clone7 = new int[n];
	int *clone8 = new int[n];
	nhapMang(a, s, clone1, clone2, clone3,
		     clone4,clone5,clone6,clone7,clone8,n);
	xuatMang(a, n);
	maxMin(a, n);
//	tangDan(a, n);
//	giamDan(a, n);
//	timKiem(s, n);
//	del(s, n);
//	insert(clone1, n);
//	timKiem1(clone2, n);
//	del1(clone2,n);
	max2(clone3, n);
	cout << endl << endl << endl;
	return 0;
}



