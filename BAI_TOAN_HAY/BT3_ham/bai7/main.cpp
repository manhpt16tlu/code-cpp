
/*một số bài tập đơn giản về mảng*/
#include <iostream>
using namespace std;
void nhapMang(int s[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan tu thu " << i + 1 << ":";
		cin >> s[i];
		
	}

}
void xuatMang(int s[],int n)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
}
void doiCho(int &m, int &n)
{
	int p;
	p = m;
	m = n;
	n = p;
}
void sapXep(int s[], int n)
{
	cout << "mang sau khi sap xep: ";
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i] > s[j])
			{
				doiCho(s[i], s[j]);
			}
		}
	}
	xuatMang(s, n);
}
bool nto(int x)
{
	int i = 2;
	if (x < 2)
	{
		return 0;
	}
	else
	{
		while (1)
		{
			if (x % i != 0)
			{
				i++;
			}
			else
			{
				break;
			}
		
		}
		if (i == x)
		{
			return 1;
		}
		else
			return 0;
	}
}
void in_nto(int s[], int n)
{
	int d = 0 ,t = 0;
	cout << "cac so nguyen to trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (nto(s[i]))
		{
			cout << s[i] << " ";
			d ++;
			t += s[i];
		}
	}
	cout << endl;
	cout << "trung binh cong cac so nguyen to: " << double(t) / d;
}
//đếm số lần xuất hiện các phần tử trong mảng
void dem(int s[], int n)
{
	int k = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i] > s[j])
			{
				doiCho(s[i], s[j]);
			}
		}
	}
	int d = 1;
	while (k < n)
	{
		if (k == n - 1)
		{
			cout << s[k] << " " << d << endl;
			break;
		}

		else if (s[k] == s[k + 1])
		{
			d++;
			k++;
		}
		else
		{
			cout << s[k] << " " << d << endl;
			k++;
			d = 1;
		}
	}
	
}
int main()
{
	int n;
	cout << "nhap so phan tu cua mang n = ";
	cin >> n;
	int* a = new int[n];
	nhapMang(a,n);
	
	//xuatMang(a, n);
	dem(a,n);
	//sapXep(a, n);
	//in_nto(a, n);

	
}