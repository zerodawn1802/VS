#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	int dd[11] = {0};
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < m; i++)
	{
		cin >> b[i];
		dd[b[i]] = 1;
	}
	for(int i = 0; i < n; i++)
	{
		if(dd[a[i]] == 1) cout << a[i] << " ";
	}
}
