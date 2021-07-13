#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long s = 0;
		long long n, k;
		cin >> n >> k;
		for(long long i = 1; i <= n; i++)
		{
			long long b = i % k;
			s += b;
		}
		cout << s << endl;
	}
}
