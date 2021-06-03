#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > x;
vector<int> trace;
vector<bool> dd;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << ' ';
        for(int i = 0; i < x[u].size(); i++)
        {
            int v = x[u][i];
            if (dd[v] == 0)
            {
                q.push(v);
                dd[v] = 1;
            }
        }
    }
}
void solve()
{
    int E, V, u, v;
    cin >> V >> E >> u;
    x.clear();
    dd.clear();
    x.resize(V + 1);
    dd.resize(V + 1,0);
    for(int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
    }
    dd[u] = 1;
    bfs(u);
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}