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
	vector<string> a;
	string tmp = "", cmp = "";
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
		if(str[i] != ' ' && str[i] != '\t' && i != str.size() - 1) tmp += str[i];
		else if(i == str.size() - 1)
		{
			tmp += str[i];
			if(tmp != cmp) a.push_back(tmp);
			tmp = "";
		}
		else
		{
			if(tmp != cmp) a.push_back(tmp);
			tmp = "";
		}
	}
	vector<string> b;
	for(int i = 0; i < a.size(); i++)
	{
		int kt = 0;
		for(int j = 0; j < b.size(); j++)
		{
			if(a[i] == b[j]) kt = 1;
		}
		if(kt == 0)
		{
			cout << a[i] << " ";
			int dem = 0;
			for(int k = 0; k < a.size(); k++)
			{
				if(a[i] == a[k]) dem++;
			}
			cout << dem << endl;
			b.push_back(a[i]);
		}
	}
}
