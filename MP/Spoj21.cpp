#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		double n, l, m;
		cin >> n >> l >> m;
		int k = 0;
		while(n < m)
		{
			k++;
			n = n * (1 + l / 100);
		}
		cout << k << endl;
	}
}
