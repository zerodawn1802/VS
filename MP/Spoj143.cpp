#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int a = -1;
	for(int i = str.size() - 1; i >= 0; i--)
	{
		if(str[i] == '0')
		{
			a = i;
		}
	}
	if(a != -1) str.erase(a, 1);
	else str.erase(0, 1);
	cout << str;
}
