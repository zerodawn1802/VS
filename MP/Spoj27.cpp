#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long t = 0;
	for(long long i = 1; i <= n; i++)
	{
		long long k = 1;
		for(long long j = 1; j <= i; j++)
		{
			k *= 2;
		}
		t += k;
	}
	cout << t;
}
