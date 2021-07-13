#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		long n;
		cin >> n;
		vector<long> a(93);
		a[1] = 1, a[2] = 1;
		for(long i = 3; i <= n; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
		cout << a[n] << endl;
	}
}
