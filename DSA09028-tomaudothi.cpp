#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > deg;
vector<vector<int> > x;
vector<bool> dd;
int V, E, M, numOfColor;
void init()
{
    numOfColor = 0;
    x.clear();
    x.resize(V + 1, vector<int> (V + 1, 0));
    deg.clear();
    dd.clear();
    dd.resize(V + 1, 0);
}
void countDeg()
{
    for(int i = 1; i <= V; i++)
    {
        int tmp = 0;
        for(int v = 1; v <= V; v++)
            if (x[i][v] == 1) tmp++;
        deg.push_back(make_pair(tmp, i));
    }
}
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}
void solve()
{
    cin >> V >> E >> M;
    init();
    for(int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        x[u][v] = x[v][u] = 1;
    }
    countDeg();
    sort(deg.begin(), deg.end(), cmp);
    for(pair<int, int> i: deg)
    {   
        int u = i.second, bac = i.first;
        if (dd[u]) continue;
        dd[u] = 1;
        numOfColor++;
        for(int v = 1; v <= V; v++)
            if (x[u][v] == 0)
            {
                dd[v] = 1;
            }
    }
    if (numOfColor <= M) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}