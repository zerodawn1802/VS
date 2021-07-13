#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char p;
	getline(cin, s, ' ');
	cin >> p;
	for(int i = s.size() - 1; i >= 0; i--)
	{
		if(p > s[i])
		{
			cout << i + 1;
			return 0;
		}
	}
}
