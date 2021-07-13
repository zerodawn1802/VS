#include <bits/stdc++.h>
using namespace std;
int s, t, u, v;
int xe()
{
	if((s == u) && (t == v)) return 0;
	if((s != u) && (t != v)) return 2;
	return 1;
}
int kt(int uu, int vv)
{
	if((1 <= uu && uu <= 8) && (1 <= vv && vv <= 8)) return 1;
	return 0;
}
int tuong()
{
	int a[9][9];
	int k = 1;
	for(int i = 1; i <= 8; i++)
	{
		for(int j = 1; j <= 8; j++)
		{
			a[i][j] = k;
			k *= -1;
		}
		k *= -1;
	}
	if(a[s][t] != a[u][v]) return 0;
	if(fabs(s - u) == fabs(t - v)) return 1;
	return 2;
}
int vua()
{
	int d[10][10], cx[10][10];
	typedef pair<int, int> dd;
	dd q[100];
	int l, r;
	int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
	int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
	for(int i = 1; i <= 8; i++)
	{
		for(int j = 1; j <= 8; j++) cx[i][j] = 1;
	}
	d[s][t] = 0;
	l = 1; r = 1;
	q[1].first = s;
	q[1].second = t;
	cx[s][t] = 0;
	do
	{
		int x = q[l].first;
		int y = q[l].second;
		l++; 
		for(int i = 0; i < 8; i++)
		{
			int uu = x + dx[i];
			int vv = y + dy[i];
			if(kt(uu, vv))
			{
				if(cx[uu][vv])
				{
					r++;
					q[r].first = uu;
					q[r].second = vv;
					cx[uu][vv] = 0;
					d[uu][vv] = d[x][y] + 1;
					if(uu == u && vv == v) return (d[uu][vv]);
				}
			}
		}
	} while(l <= r);
}
int main()
{
	cin >> s >> t >> u >> v;
	cout << xe() << " " << tuong() << " " << vua();
}
