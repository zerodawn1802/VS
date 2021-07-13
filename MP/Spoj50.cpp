#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		string str, s1 = "ABC", s2 = "DEF", s3 = "GHI", s4 = "JKL", s5 = "MNO", s6 = "PQRS", s7 = "TUV", s8 = "WXYZ";
		cin >> str;
		string tmp = "";
		for(int j = 0; j < str.size(); j++)
		{
			if(str[j] >= 'a' && str[j] <= 'z') str[j] = str[j] - 'a' + 'A';
			for(int k = 0; k < 3; k++)
			{
				if(str[j] == s1[k]) tmp += '2';
			}
			for(int k = 0; k < 3; k++)
			{
				if(str[j] == s2[k]) tmp += '3';
			}
			for(int k = 0; k < 3; k++)
			{
				if(str[j] == s3[k]) tmp += '4';
			}
			for(int k = 0; k < 3; k++)
			{
				if(str[j] == s4[k]) tmp += '5';
			}
			for(int k = 0; k < 3; k++)
			{
				if(str[j] == s5[k]) tmp += '6';
			}
			for(int k = 0; k < 4; k++)
			{
				if(str[j] == s6[k]) tmp += '7';
			}
			for(int k = 0; k < 3; k++)
			{
				if(str[j] == s7[k]) tmp += '8';
			}
			for(int k = 0; k < 4; k++)
			{
				if(str[j] == s8[k]) tmp += '9';
			}
		}
		string tmp1 = "";
		for(int j = tmp.size() - 1; j >= 0; j--)
		{
			tmp1 = tmp1 + tmp[j];
		}
		int d = 0;
		for(int j = 0; j < tmp.size(); j++)
		{
			if(tmp[j] != tmp1[j])
			{
				d++;
				break;
			}
		}
		if(d == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

