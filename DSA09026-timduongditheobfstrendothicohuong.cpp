#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > x;
vector<int> trace;
vector<bool> dd;
bool check;
void in(int u)
{
    if (trace[u] == -1)
    {
        cout << u << ' ';
        return;
    }
    in(trace[u]);
    cout << u << ' ';
}
void bfs(int s, int kt)
{
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (u == kt) 
        {
            check = 1;
            in(u);
            return;
        }
        for(int i = 0; i < x[u].size(); i++)
        {
            int v = x[u][i];
            if (dd[v] == 0)
            {
                trace[v] = u;
                q.push(v);
                dd[v] = 1;
            }
        }
    }
}
void solve()
{
    int E, V, u, v;
    cin >> V >> E >> u >> v;
    check = 0;
    x.clear();
    dd.clear();
    trace.clear();
    trace.resize(V + 1, -1);
    x.resize(V + 1);
    dd.resize(V + 1, 0);
    for(int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
    }
    dd[u] = 1;
    bfs(u, v);
    if (check == 0) cout << -1;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}