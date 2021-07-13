#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int c = 0;
		for(int j = m; j <= n; j++)
		{
			if(j % a == 0 || j % b == 0) c++;
		}
		cout << c << endl;
	}
}

