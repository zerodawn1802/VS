#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > x;
vector<int> trace;
vector<bool> dd;
int V;
int bfs(int s, int t)
{
    dd.clear();
    dd.resize(V + 1, 0);
    queue<pair<int, int> > q;
    q.push(make_pair(s, 0));
    while (!q.empty())
    {
        int u = q.front().first;
		int way = q.front().second;
        q.pop();
        if (u == t)
		{
			return way;
		}
        for(int i = 0; i < x[u].size(); i++)
        {
            int v = x[u][i];
            if (dd[v] == 0)
            {
                q.push(make_pair(v, way + 1));
                dd[v] = 1;
            }
        }
    }
}
void solve()
{
    int E;
    cin >> V;
	E = V;
    x.clear();
    x.resize(V + 1);
    for(int i = 1; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    int q;
	cin >> q;
	while (q--)
	{
		int u, v;
		cin >> u >> v;
		cout << bfs(u, v) << endl;
	}
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}