#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		string tmp = "";
		int k = str.size();
		for(int i = k - 1; i >= 0; i--)
		{
			tmp += str[i];
		}
		int kt = 1;
		for(int i = 1; i < k; i++)
		{
			if(abs(str[i] - str[i - 1]) != abs(tmp[i] - tmp[i - 1]))
			{
				cout << "NO" << endl;
				kt = 0;
				break;
			}
		}
		if(kt == 1) cout << "YES" << endl;
	}
}
