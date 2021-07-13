#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	while(str.size() % 3 != 0)
	{
		str = '0' + str;
	}
	for(int i = 0; i < str.size(); i += 3)
	{
		string tmp = "";
		for(int j = i; j < i + 3; j++)
		{
			tmp += str[j];
		}
		if(tmp == "000") cout << "0";
		if(tmp == "001") cout << "1";
		if(tmp == "010") cout << "2";
		if(tmp == "011") cout << "3";
		if(tmp == "100") cout << "4";
		if(tmp == "101") cout << "5";
		if(tmp == "110") cout << "6";
		if(tmp == "111") cout << "7";
	}
}
