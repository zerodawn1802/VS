#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		long long n;
		cin >> n;
		for(int j = 2; j <= sqrt(n); j++)
		{
			if(n % j == 0)
			{
				while(n % j == 0)
				{
					n /= j;
				}
				if(n == 1)
				{
					cout << j << endl;
					break;
				}
			}
		}
		if(n != 1) cout << n << endl;
	}
}
