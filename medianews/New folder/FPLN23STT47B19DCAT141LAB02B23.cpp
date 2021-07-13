/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
vector<string> a1, a2;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	string tmp = "";
	for(int i = 0; i < s1.size(); i++)
	{
		if(s1[i] == ' ' || s1[i] == '\t')
		{
			int ktp = 0;
			for(int k = 0; k < a1.size(); k++)
			{
				if(a1[k] == tmp)
				{
					ktp = 1;
					break;
				}
			}
			if(ktp == 0)
			{
				a1.push_back(tmp);
				tmp = "";
			}
			else
			{
				ktp = 0;
				tmp = "";
			}
		}
		else if(i != s1.size() - 1) tmp += s1[i];
		else if(i == s1.size() - 1)
		{
			tmp += s1[i];
			int ktp = 0;
			for(int k = 0; k < a1.size(); k++)
			{
				if(a1[k] == tmp)
				{
					ktp = 1;
					break;
				}
			}
			if(ktp == 0)
			{
				a1.push_back(tmp);
				tmp = "";
			}
			else
			{
				ktp = 0;
				tmp = "";
			}
		}
	}
	for(int i = 0; i < s2.size(); i++)
	{
		if(s2[i] == ' ' || s2[i] == '\t')
		{
			int ktp = 0;
			for(int k = 0; k < a2.size(); k++)
			{
				if(a2[k] == tmp)
				{
					ktp = 1;
					break;
				}
			}
			if(ktp == 0)
			{
				a2.push_back(tmp);
				tmp = "";
			}
			else
			{
				ktp = 0;
				tmp = "";
			}
		}
		else if(i != s2.size() - 1) tmp += s2[i];
		else if(i == s2.size() - 1)
		{
			tmp += s2[i];
			int ktp = 0;
			for(int k = 0; k < a2.size(); k++)
			{
				if(a2[k] == tmp)
				{
					ktp = 1;
					break;
				}
			}
			if(ktp == 0)
			{
				a2.push_back(tmp);
				tmp = "";
			}
			else
			{
				ktp = 0;
				tmp = "";
			}
		}
	}
	int kt = 0;
	for(int i = 0; i < a1.size(); i++)
	{
		for(int j = i + 1; j < a1.size(); j++)
		{
			if(a1[i] > a1[j])
			{
				string tmp = "";
				tmp = a1[i];
				a1[i] = a1[j];
				a1[j] = tmp;
			}
		}
	}
	for(int i = 0; i < a1.size(); i++)
	{
		for(int j = 0; j < a2.size(); j++)
		{
			if(a1[i] == a2[j])
			{
				kt = 1;
				break;
			}
		}
		if(kt == 0) cout << a1[i] << " ";
		else kt = 0;
	}
}
