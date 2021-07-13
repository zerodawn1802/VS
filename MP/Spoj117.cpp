#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n, k;
		cin >> n >> k;
		for(int j = 2; j <= sqrt(n); j++)
		{
			while(n % j == 0)
			{
				k--;
				n = n / j;
				if(k == 0)
				{
					cout << j << endl;
					break;
				}
			}
			if(k == 0) break;
		}
		if(n != 1 && k == 1) cout << n << endl;
		else if(k > 0)
		{
			cout << "-1" << endl;
		}
	}
}
