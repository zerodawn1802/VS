#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	while(n != 0)
	{
		long long sc = 1;
		for(int i = 2; i <= n; i++)
		{
			sc *= (i + n) / i;
		}
		cout << sc << endl;
		cin >> n;
	}
}

