#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	vector<string> s;
	string t = "";
	int b = str.size() % 3;
	for(int i = 0; i < b; i++)
	{
		t = str[i] + t;
	}
	for(int i = b; i < str.size(); i += 3)
	{
		string tmp;
		for(int j = i; j < i+3; j++)
		{
			tmp += str[j];
		}
		s.push_back(tmp);
	}
	if(t != "") cout << t << ",";
	for(int i = 0; i < s.size(); i++)
	{
		if(i != s.size() - 1) cout << s[i] << ",";
		else cout << s[i];
	}
}

