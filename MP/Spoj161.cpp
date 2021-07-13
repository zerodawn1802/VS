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
		int dem = 1;
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] != str[i + 1])
			{
				cout << dem << str[i];
				dem = 1;
			}
			else
			{
				dem++;
			}
		}
		cout << endl;
	}
}
