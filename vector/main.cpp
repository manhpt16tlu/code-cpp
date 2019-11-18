/*bài tập về vector*/
#include <iostream>
#include <vector>
using namespace std;
void nhap(vector <int> &s)
{
	for (int i = 0; i < s.size(); i++)
	{
		cout << "nhap: ";
		cin >> s[i];
	}


}
void xuat(vector<int> &s)
{
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
}
void chen1(vector<int>& s, int x)
{
	cout << "chen " << x << " vao cuoi: ";
	s.push_back(x);
	xuat(s);

}
void chen2(vector <int> &s, int x)
{
	cout << "chen " << x << " vao vi tri 3: ";
	s.insert(s.begin() + 2,x);
	xuat(s);
}
void chen3(vector <int>& s, int x)
{
	cout << "chen 5 so " << x << " vao vi tri 3: ";
	s.insert(s.begin() + 2, 5,x);
	xuat(s);
}
void xoa1(vector <int>& s)
{
	cout << "xoa phan tu o vi tri cuoi: ";
	s.erase(s.end() - 1,s.end());
	xuat(s);
}
void xoa2(vector <int>& s)
{
	if (s.size() > 3)

	{
		cout << "xoa phan tu o vi tri 3:";
		s.erase(s.begin() + 2, s.begin() + 3);
		xuat(s);
	}
	else
		cout << "ko xoa được vi tri 3";
}
void xoa3(vector <int> &s)
{
	if (s.size() > 7)
	{
		cout << "xoa tu vi tri 3  ";
		s.erase(s.begin() + 2, s.begin() + 7);
		xuat(s);
	}
	else
		cout << "ko xoa duoc vi tri 3 -> 7 ";
	
}
int main()
{
	int n,x;
	while (1)
	{
		cout << "nhap so phan tu cua vector n > 3: ";
		cin >> n;
		if (n > 3)
			break;
	}
	vector <int> a(n);
	nhap(a);
	vector <int> a1(a), a2(a), a3(a), a4(a),a5(a),a6(a);
	cout << "vector cua ban: ";
	xuat(a);
	cout << "gia tri tai vi tri thu tu: " << a[3] << endl;
	cout << "gia tri tai vi tri dau tien: " << a[0] << endl;
	cout << "gia tri tai vi tri cuoi cung: " << a[n - 1] << endl;
	cout << "nhap gia tri can chen: ";
	cin >> x;
	chen1(a1, x);
	chen2(a2, x);
	chen3(a3, x);
	xoa1(a4);
	xoa2(a5);
	xoa3(a6);
	a.clear();
	return 0;

}