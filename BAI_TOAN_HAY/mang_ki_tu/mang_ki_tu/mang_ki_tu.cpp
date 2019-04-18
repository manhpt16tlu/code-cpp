//các hàm với mảng kí tự
#include"pch.h"
#include<iostream>
#include<string>
using namespace std;
//hàm nhập xâu kí tự
void nhapXau(string &str)
{
	
	cout << "Nhap vao xau:";
	getline(cin, str);
	
}
//ham in ra xau vua nhap
void inXau(string str)
{
	if (str.empty()) cout << "xau rong";
	else
	{
		cout << "do dai xau cua ban:" << str.length() << endl;
		cout << "xau ban dau: " << str << endl << endl << endl;
	}
}
//kiểm tra xâu đối xứng
void doiXung(string str)
{
	string a;
	for (int i = 0; i<str.length(); i++)
	{
		str[i] = tolower(str[i]);
	 }
	for (int i = str.length() - 1; i >= 0; i--)
	{
		a += str[i];
	}
	if (a.compare(str) == 0)
		cout << "doi xung";
	else cout << "ko doi xung";
}
//hàm chuẩn hóa xâu
void dauCach(string &str)
{
	
	//xóa dấu cách  thừa đầu chuỗi
	while (str[0] == ' ')
	{
		str.erase(0, 1);
	}
	//xóa kí tự thừa ở cuối chuỗi 
	while (str[str.length() - 1] == ' ')
	{
		str.erase(str.length() - 1, 1);
	}
	//xóa dấu cách thừa ờ giữa chuỗi
	while (int (str.find("  ")) > 0)
	{
		str.erase(int(str.find("  ")), 1);
	}
}
//hàm chuyển các kí tự đầu mỗi từ thành chữ hoa,các từ còn lại thành chữ thường
void inHoa(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	str[0] = toupper(str[0]);
	for (int i = 1; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			str[i + 1] = toupper(str[i + 1]);
	    }
	}
	cout << "xau da chuan hoa:" << str << endl << endl;

}
int main()
{
	string str;
	nhapXau(str);
	inXau(str);
	//doiXung(str);
	//dauCach(str);
	//inHoa(str);
	return 0;
}