//nhập danh sách liên kết đơn 
#include <iostream>
#include<string>
using namespace std;
//cấu trúc 1 node
struct node
{
	int x;
	node *lk; // con trỏ để liên kết với nhau
};
struct list
{
	node *dau;
	node *cuoi;
};
void khoitao(list &l)
{
	l.cuoi = NULL;
	l.dau = NULL;
}
node *khoitao(int a)// khởi tạo 1 node để thêm vào danh sách
{
	node *p = new node;
	p->x = a;
	p->lk = NULL;
	return p;
} 
void themdau(list &l, node *p)
{
	if (l.dau == NULL)
	{
		l.dau = l.cuoi = p;
	}
	else
	{
		p->lk = l.dau;//cho con trỏ của node cần thêm trỏ tới nốt đầu
		l.dau = p;//cập nhật node đầu chính là nốt p;
	}

}
void themcuoi(list& l, node *p)
{
	if (l.dau == NULL)
	{
		l.dau = l.cuoi = p;
	}
	else
	{
		l.cuoi->lk = p;//cho con trỏ của node cuốitrỏ tới nốt cần thêm
		l.cuoi = p;//cập nhật p là node cuối
	}

}
void hamxuatds(list l)
{
	for (node* i = l.dau; i != NULL; i = i->lk)
	{
		cout << i->x << endl;
	}
}
int main()
{
	list l;
	khoitao(l);
	int n;
	cout << "nhap so node cần thêm: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		node *p;
		p = khoitao(5);
		themdau(l, p);
	}
	hamxuatds(l);
	




	return 0;
}