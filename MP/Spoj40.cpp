#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int s = 0;
	cin >> n;
	for(int i = 0; i <= n; i++)
	{
		for(int j = i; j <= n; j++)
		{
			s += i + j;
		}
	}
	cout << s;
}

