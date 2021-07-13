#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		int check = 0;
		for(int i = 0; i < str.size(); i++)
		{
			int k = i + 1;
			int d = str[i] - '0';
			if(k % 2 == 0)
			{
				if(d % 2 != 0)
				{
					check = 1;
					cout << "NO" << endl;
					break;
				}
			}
			else
			{
				if(d % 2 == 0)
				{
					check = 1;
					cout << "NO" << endl;
					break;
				}
			}
		}
		if(check == 0) cout << "YES" << endl;
	}
}
