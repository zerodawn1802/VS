#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	string s = "aoyeui";
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
	}
	string tmp = "";
	for(int i = 0; i < str.size(); i++)
	{
		int c = 0;
		for(int j = 0; j < s.size(); j++)
		{
			if(str[i] != s[j]) c++;
		}
		if(c == 6) tmp = tmp + str[i];
	}
	string tp = "";
	for(int i = 0; i < tmp.size(); i++)
	{
		tp = tp + '.' + tmp[i];
	}
	cout << tp;
}

