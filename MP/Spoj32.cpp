#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = 0;
	vector<string> s(n);
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(s[i] == "X++" || s[i] == "++X") x++;
		if(s[i] == "X--" || s[i] == "--X") x--;
	}
	cout << x;
}

