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
		int dem = 0;
		for(int i = m; i <= n; i++)
		{
			if(i % a == 0 || i % b == 0)
			{
				dem++;
			}
		}
		cout << dem << endl;
	}
}

