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
		if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
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
	for(int i = 1; i < a.size(); i++)
	{
		if(a[i].at(0) >= 'a' && a[i].at(0) <= 'z') a[i].at(0) = a[i].at(0) - 'a' + 'A';
		if(i != a.size() - 1) cout << a[i] << " ";
		else cout << a[i];
	}
	cout << ", ";
	for(int i = 0; i < a[0].size(); i++)
	{
		if(a[0].at(i) >= 'a' && a[0].at(i) <= 'z') a[0].at(i) = a[0].at(i) - 'a' + 'A';
		cout << a[0].at(i);
	}
}

