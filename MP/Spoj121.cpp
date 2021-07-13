#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int j = 1; j <= t; j++)
	{
		int n;
		cin >> n;
		vector<long long> a(n);
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		vector<long long> b(n);
		b[0] = a[0] * a[1];
		cout << b[0] << " ";
		b[n - 1] = a[n - 2] * a[n - 1];
		for(int i = 1; i < n - 1; i++)
		{
			b[i] = a[i - 1] * a[i + 1];
			cout << b[i] << " ";
		}
		cout << b[n - 1] << endl;
	}
}
