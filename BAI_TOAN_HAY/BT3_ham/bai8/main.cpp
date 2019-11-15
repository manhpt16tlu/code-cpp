/*bài tập về chuỗi kí tự*/
#include <iostream>
#include <string>
using namespace std;
void nhap(string &str)
{
	cout << "nhap chuoi cua ban: ";
	getline(cin, str);


}
void dem(string str)
{
	int d1(0),d2(0),d3(0);
	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
			d1++;
		if (isdigit(str[i]))
			d2++;
		if (isspace(str[i]))
			d3++;

	}
	cout << "chu hoa: " << d1 << " chu so: " << d2 << " dau cach: " << d3;
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
		str[i] = tolower(str[i]);
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
/*void daoNguoc(string& str)
{
	for (int i = str.length() - 1; i > 0; i--)
	{
		if
	}

}*/
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
int main()
{
	string s,s1;
	nhap(s);
	//dem(s);
	//cout << endl;
	//cout << "do dai: " << s.length();
	chuThuong(s);
	//chuHoa(s);
	//cout << s;
	//getline(cin, s1);	
	//chuanHoa(s);
	//cout << s;
	//cout << s << " do dai: " << s.length();s
	sapxep(s);
	tansuat(s);
	//cout << s;



}