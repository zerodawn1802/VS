#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		string str;
		cin >> str;
		int tong = 0;
		for(int j = 0; j < str.size(); j++)
		{
			int so = str[j] - '0';
			tong += so;
		}
		if(tong != 0 && tong % 9 == 0) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
