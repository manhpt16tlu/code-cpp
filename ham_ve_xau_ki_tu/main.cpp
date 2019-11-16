/*bài tập về chuỗi kí tự*/
#include <iostream>
#include <string>
using namespace std;
void nhap(string &str)
{
	while (1)
	{
		cout << "nhap xau khac rong: ";
		getline(cin, str);
		if (!str.empty())
			break;
	}
}
void dem(string str)
{
	int d1(0),d2(0),d3(0),d4(0);
	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
			d1++;
		if (islower(str[i]))
			d2++;
		if (isdigit(str[i]))
			d3++;
		if (isspace(str[i]))
			d4++;

	}
	cout << "chu hoa: " << d1 << " chu thuong: " << d2 << " chu so: " << d3 << " dau cach: " << d4;
	cout << endl;
}
void chuThuong(string &str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
}
void chuHoa(string& str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
}
void chuanHoa(string &str)
{
	while (isspace(str[0]))
		str.erase(0, 1);
	while (isspace(str[str.length() - 1]))
		str.erase((str.length() - 1), 1);
	while (str.find("  ") != -1)
		str.erase(str.find("  "), 1);
	str[0] = toupper(str[0]);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}
}
void daoNguoc(string str)
{
	string str1 = "";
	for (int i = str.length() - 1; i >= 0; i--)
	{
		str1 += str[i];
	}
	cout << str1;
}
void doicho(char &a, char &b)
{
	char c;
	c = a;
	a = b;
	b = c;
}
void sapxep(string  &str)
{
	for (int i = 0; i < str.length() - 1; i++)
	{
		for (int j = i + 1; j < str.length(); j++)
		{
			if (str[i] > str[j])
			{
				doicho(str[i], str[j]);
			}
		}
	}
}
void tansuat(string str)
{
	int i(0), d(1);
	while (1)
	{
		if (i == str.length() - 1)
		{
			cout << str[i]<< "  "<<d;
			break;
		}
		else if (str[i] == str[i + 1])
		{
			i++;
			d++;
		}
		else
		{
			
			cout << str[i] << "  " << d << endl;
			d = 1;
			i++;
		}
	}
}
//đếm số lần xuất hiện của xâu con trong xâu ban đầu 
int dem1(string str)
{
	int d(0),i(0);
	string str1;
	cout << "nhap xau con: ";
	getline(cin, str1);
	cout << "so lan xuan hien: ";
	int l = str1.length();
	if (l > str.length())
	{
		return d;
	}
	else
	{
		while (i < str.length())
		{
			if (str.find(str1, i) != -1)
			{
				d++;
				i = str.find(str1, i) + l;
			}
			else
				return d;
		}
		return d;
	}
}
//tìm và xóa hết các xâu con trong xâu ban đầu
void xoa(string  &str)
{
	string str1;
	cout << "nhap xau can xoa: ";
	getline(cin, str1);
	int l = str1.length();
	while (str.find(str1) != -1)
	{
		str.erase(str.find(str1),l);
	}
}
void thayThe(string &str)
{
	string str1,str2;
	cout << "nhap xau can thay the: ";
	getline(cin, str1);
	int l(str1.length());
	cout << "nhap xau moi: ";
	getline(cin, str2);
	while (str.find(str1) != -1)
	{
		str.insert(str.find(str1), str2);
		str.erase(str.find(str1), l);
	}
}
string chen(string &str)
{ // chèn vào cuối chuỗi
	string str1;
	cout << "nhap xau can chen: ";
	getline(cin, str1);
	return str += str1;
}
string chen1(string &str)
{ // chèn vào vị trí x
	string str1;
	int x;
	cout << "nhap xau can chen: ";
	getline(cin, str1);
	while (1)
	{
		cout << "nhap vi tri can chen: ";
		cin >> x;
		if (x <= str.length())
			break;
	}
	str.insert(x - 1, str1);
	return str;
}
string chen2(string &str)
{
	//chèn n xâu mới vào vị trí x 
	string str1;
	int x,n,i(0);
	cout << "nhap xau can chen: ";
	getline(cin, str1);
	while (1)
	{
		cout << "nhap vi tri can chen: ";
		cin >> x;
		if (x <= str.length())
			break;
	}
	cout << "nhap so lan chen: ";
	cin >> n;
	while (i < n)
	{
		str.insert(x - 1, str1);
		i++;
	}
	return str;


}
string chen3(string &str)

{
	string str1 = "";
	int x, n;
	//trích ra n kí tự từ vị trí x
	while (1) 
	{
		cout << "nhap vi tri x: ";
		cin >> x;
		if (x <= str.length())
			break;
	}
	cout << "nhap so ki tu can trich: ";
	cin >> n;
    for (int i = x;i < n + x;i++)
	{
		str1 += str[i];
	}
	return str1;
	
}
void dangCot(string str)
//chuyển xâu về dạng cột.mỗi từ trên một dòng,và đếm luôn số từ
{
	int d(0);
	while (isspace(str[0]))
		str.erase(0, 1);
	while (isspace(str[str.length() - 1]))
		str.erase((str.length() - 1), 1);
	while (str.find("  ") != -1)
		str.erase(str.find("  "), 1);
	for (int i = 0; i < str.length();i++)
	{
		if (str[i] == ' ')
		{
			d++;
			cout << endl;
			continue;
		}
		cout << str[i];
	}
	cout << endl;
	cout << "co " << ++d << " tu";
}
int main()
{
	string s;
	nhap(s);
	string s1(s), s2(s), s3(s),s4(s),s5(s),s6(s),s7(s),s8(s),s9(s),s10(s),s11(s);
	/*cout << "do dai: " << s.length() << endl;
	dem(s);
	cout << "chuyen xau thanh chu thuong: ";
	chuThuong(s1);
	cout << s1 << endl;
	cout << "chuyen xau thanh chu hoa: ";
	chuHoa(s2);
	cout << s2 << endl;
	cout << "xau sau khi chuan hoa: ";
    chuanHoa(s1);
	cout << s1 << endl;
	cout << "tan suat xuat hien cua cac phan tu: " << endl;
	sapxep(s4);
	tansuat(s4);
	cout << endl;
	cout << "dao nguoc xau: ";
	daoNguoc(s);
	cout << endl;
	cout << dem1(s) << endl;
	xoa(s6);
	cout << "xau sau khi xoa: " << s6 << endl;
	thayThe(s7);
	cout << "xau moi: " << s7;*/
	//cout << "xau sau khi chen vao cuoi: " << chen(s8);
	//cout << chen1(s9);
	//cout << chen2(s10);
	//cout << chen3(s11);
	dangCot(s);
	return 0;
}