#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n > 0) cout << n;
	else
	{
		n = abs(n);
		if(n < 10)
		{
			cout << "0";
			return 0;
		}
		else
		{
			int m = n / 10;
			int a = n % 10;
			int b = m % 10;
			if(a > b)
			{
				cout << -m;
				return 0;
			}
			else
			{
				cout << -n / 100 * 10 + a;
				return 0;
			}
		}
	}
}
