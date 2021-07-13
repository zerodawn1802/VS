#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n;
		cin >> n;
		int a[1003];
		for(int j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		sort(a, a + n);
		for(int j = n - 1; j >= n / 2; j--)
		{
			if(n - 1 - j != j) cout << a[j] << " " << a[n - 1 - j] << " ";
			else cout << a[j] << " ";
		}
		cout << endl;
	}
}
