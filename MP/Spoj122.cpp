#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		long long a, b;
		cin >> a >> b;
		long long m = a, n = b;
		while(a != b)
		{
			if(a > b) a -= b;
			else b -= a;
		}
		long long c = m * n / a;
		cout << c << " " << a << endl;
	}
}
