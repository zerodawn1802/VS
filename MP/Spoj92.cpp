#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n, p, x = 0;
		cin >> n >> p;
		for(int j = 2; j <= n; j++)
		{
			int m = j;
			while(m % p == 0)
			{
				m = m / p;
				x++;
			}
		}
		cout << x << endl;
	}
}
