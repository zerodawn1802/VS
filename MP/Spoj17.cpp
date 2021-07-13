#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m);
	int dd[1000] = {0};
	for(int i = 0; i < m; i++)
	{
		cin >> a[i] >> b[i];
	}
	for(int i = 0; i < m; i++)
	{
		if(a[i] == 1) dd[a[i]] = 1;
		else if(b[i] == 1) dd[b[i]] = 1;
	}
	for(int i = 0; i < m; i++)
	{
		if(a[i] == 1) dd[b[i]] = 1;
		else if(b[i] == 1) dd[a[i]] = 1;
	}
	for(int i = 0; i < m; i++)
	{
		if(dd[a[i]] == 1) dd[b[i]] = 1;
		else if(dd[b[i]] == 1) dd[a[i]] = 1;
	}
	int c = 0;
	for(int i = 1; i <= n; i++)
	{
		if(dd[i] == 0)
		{
			c++;
			cout << i << endl;
		}
	}
	if(c == 0) cout << c;
}
