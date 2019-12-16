//tạo danh sách liên kết đơn sinh viên
#include<iostream>
#include<string>
using namespace std;
//khởi tạo class sinh viên 
class SV
{
private:
	string ma,name;
public:
	SV *lk;
	string getma()
	{
		return ma;
	}
	string getname()
	{
		return name;
	}
	void nhaptt()
	{
		cout << "nhap ma sv: ";
		getline(cin, ma);
		cout << "nhap ten sinh vien: ";
		getline(cin, name);
	}

};
//khởi tạo danh sách sinh viên
struct DS
{
	SV *dau;
	SV *cuoi;
};
void khoitaods(DS &l)
{
	l.dau = NULL;
	l.cuoi = NULL;
}
//khởi tạo node sinh viên
SV *khoitao()
{
	SV *p = new SV;
	p->nhaptt();
	return p;
}
void themdau(DS &l, SV *p)
{
	if (l.dau == NULL)
	{
		l.dau = l.cuoi = p;
	}

	else
	{
		p->lk = l.dau;
		l.dau = p;
	}

}
void xuat(DS l)
{
	for (SV *i = l.dau; i != NULL; i = i->lk)
	{
		cout <<i->getma()<<"-"<< i->getname()<< endl;
	}
}
int main()
{
	DS l;
	khoitaods(l);
	int n;
	cout << "nhap so sinh vien can them: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		SV *p;
		p = khoitao();
		themdau(l, p);
	}
	xuat(l);
	return 0;
}