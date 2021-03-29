#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;
int n, m, k;
vector <int > f;
vector <pair <int, int> > x;
ll res;
void xl()
{
	cin >> n >> m;
	int dem[4] = {0}; 
	f.resize(1001, 0);
	for(int i = 0; i < n; i++)
	{
		cin >> k;
		f[k] ++;
	}
	for(int i = 0; i < 1001; i++)
	{
		if(f[i])
		{
			x.push_back(make_pair(i, f[i]));
			f[i] = 0;
		}
	}
	for(int i = 0; i < m; i++)
	{
		cin >> k;
		f[k] ++;
		if(k < 4) dem[k] ++;
	} 
	res = 0;
	for(int i = 0; i < 1001; i++)
	{
		res += f[i];
		f[i] = m - res;
	}
	res = 0;
	for(int i = 0; i < x.size(); i++)
	{
		if(x[i].F == 0) continue;
		if(x[i].F == 1) res += dem[0] * x[i].S;
		else if(x[i].F == 2) res = res + (dem[0] + dem[1] + f[4]) * x[i].S;
		else if (x[i].F == 3) res += (m - dem [3]) * x[i].S;
		else res += (dem[0] + dem[1] + f[x[i].F]) * x[i].S;
	}
	cout << res;
	x.clear();
	f.clear();
}
int main()
{
	int t;
	cin >> t;
	while (t-- )
	{
		xl();
		cout << endl;
	}
}
