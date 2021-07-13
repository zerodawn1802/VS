#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] != '4' && str[i] != '7')
		{
			cout << "NO";
			return 0;
		}
	}
	int tong1 = 0, tong2 = 0;
	if(str.size() % 2 == 0)
	{
		for(int i = 0; i < str.size() / 2; i++)
		{
			tong1 += (int)str[i]; 
		}
		for(int i = str.size() / 2; i <= str.size(); i++)
		{
			tong2 += (int)str[i];
		}
		if(tong1 == tong2)
		{
			cout << "YES";
			return 0;
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	else
	{
		for(int i = 0; i < (str.size() - 1) / 2; i++)
		{
			tong1 += (int)str[i];
		}
		for(int i = (str.size() + 1) / 2; i < str.size(); i++)
		{
			tong2 += (int)str[i];
		}
		if(tong1 == tong2)
		{
			cout << "YES";
			return 0;
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
}

