#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	int dd[130];
	for(int i = 0; i < 130; i++)
	{
		dd[i] = 0;
	}
	for(int i = 0; i < n; i++)
	{
		int so = str[i];
		if(so >= 96 && so <= 122) so -= 32;
		dd[so]++;
	}
	int kt = 1;
	for(int i = 65; i <= 90; i++)
	{
		if(dd[i] == 0)
		{
			kt = 0;
			break;
		}
	}
	if(kt == 0) cout << "NO";
	else cout << "YES";
	return 0;
}
