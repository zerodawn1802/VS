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
	string s1, s2, str;
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, str);
	vector<int> a;
	int k1 = 0, k2 = 0;
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == s1[k1])
		{
			a.push_back(1);
			k1++;
		}
		else if(str[i] == s2[k2])
		{
			a.push_back(2);
			k2++;
		}
	}
	for(int i = 0; i < a.size(); i++) cout << a[i];
}

