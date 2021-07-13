/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	string tmp = "";
	vector<string> a;
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] != ' ' && str[i] != '\t' && i != str.size() - 1) tmp += str[i];
		else if(i == str.size() - 1)
		{
			tmp += str[i];
			if(tmp != "") a.push_back(tmp);
		}
		else
		{
			if(tmp != "") a.push_back(tmp);
			tmp = "";
		}
	}
	for(int i = 0; i < a.size(); i++)
	{
		int kt = 0;
		for(int j = 0; j < a[i].size(); j++)
		{
			if(a[i].at(j) >= 'a' && a[i].at(j) <= 'z')
			{
				kt = 1;
				break;
			}
		}
		if(kt == 0) cout << a[i] << " ";
	}
}

