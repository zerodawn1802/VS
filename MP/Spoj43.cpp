#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n;
		cin >> n;
		int c = 0;
		int p = 0;
		for(int j = 1; j * j <= n; j++)
		{
			if(n % j == 0 && j % 2 == 0) c++;
			if(j * j == n && j % 2 == 0) p++;
		}
		if(n % 2 == 0) cout << 2 * c - p + 1 << endl;
		else cout << 2 * c - p << endl;
	}
}

