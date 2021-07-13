#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		bool check = 0;
		long long a, m;
		cin >> a >> m;
		long long n;
		for(int k = 1; k < m; k++)
		{
			n = k * a;
			if(n % m == 1)
			{
				check = k;
				cout << k << endl;
				break;
			}
		}
		if(!check) cout << "-1" << endl;
	}
}
