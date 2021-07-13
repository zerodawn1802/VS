#include <bits/stdc++.h>
using namespace std;
int k, n, m, pt[1003], p;
vector <int> ng;
vector <int> dd[1003];
int dd1[1003];
void process(int u)
{
	for(int i = 0; i < dd[u].size(); i++)
	{
		int v = dd[u][i];
		if(pt[v] == 0)
		{
			pt[v] = 1;
			dd1[v]++;
			process(v);
		}
	}
}
int main()
{
	cin>> k >> n >> m;
	int ps;
	for(int i = 1; i <= k; i++)
	{
		cin >> p;
		ng.push_back(p);
	}
	for(int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		dd[x].push_back(y);
	}
	for(int i = 1; i <= n; i++) dd1[1003];
	for(int i = 0; i < ng.size(); i++)
	{
		for(int i = 1; i <= n; i++) pt[i]=0;
		pt[ng[i]] = 1;
		dd1[ng[i]]++;
		process(ng[i]);
	}
	int dem = 0;
	for(int i = 1; i <= n; i++) if(dd1[i] == k) dem++;
	cout << dem;
	return 0;
}
