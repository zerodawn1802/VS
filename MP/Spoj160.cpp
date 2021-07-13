#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, tmp = 0;
	cin >> n >> m;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n - 2; i++)
	{
		for(int j = i + 1; j < n - 1; j++)
		{
			for(int k = j + 1; k < n; k++)
			{
				if(a[i] + a[j] + a[k] > tmp && a[i] + a[j] + a[k] <= m) tmp = a[i] + a[j] + a[k];
			}
		}
	}
	cout << tmp;
}
