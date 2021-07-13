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
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
	}
	vector<string> a;
	string tmp = "";
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] != ' ' && str[i] != '\t' && i != str.size() - 1) tmp += str[i];
		else if(i == str.size() - 1)
		{
			tmp += str[i];
			a.push_back(tmp);
		}
		else
		{
			if(tmp != "")a.push_back(tmp);
			tmp = "";
		}
	}
	vector<string> b;
	b.push_back(a[0]);
	int dem[100] = {0};
	for(int i = 1; i < a.size(); i++)
	{
		int kt = 0;
		for(int j = 0; j < b.size(); j++)
		{
			if(a[i] == b[j]) kt = 1;
		}
		if(kt == 0) b.push_back(a[i]);
	}
	for(int i = 0; i < b.size(); i++)
	{
		for(int j = 0; j < a.size(); j++)
		{
			if(b[i] == a[j]) dem[i]++;
		}
	}
	int max = 0, vt;
	for(int i = 0; i < b.size(); i++)
	{
		if(dem[i] > max)
		{
			max = dem[i];
			vt = i;
		}
	}
	cout << b[vt] << " " << max;
}

