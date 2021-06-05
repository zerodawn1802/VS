#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > x;
vector<int> trace;
bool check;
vector<bool> dd;
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
void dfs(int u, int kt)
{
    if (u == kt)
    {
        in(u);
        check = 1;
        return;
    }
    for(int i = 0; i < x[u].size(); i++)
    {
        int v = x[u][i];
        if (dd[v] == 0)
        {
            trace[v] = u;
            dd[v] = 1;
            dfs(v, kt);
        }
    }
}
void solve()
{
    int E, V, u, v;
    cin >> V >> E >> u >> v;
    x.clear();
    check = 0;
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
    dfs(u, v);
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