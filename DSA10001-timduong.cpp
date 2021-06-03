#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const pair<int,int> b[4] = {make_pair(-1, 0), make_pair(1, 0), make_pair(0, -1), make_pair(0, 1)};
pair<int,int> st, fn;
vector<vector<int> > a;
vector<vector<bool> > dd;
int n, m;
bool Yes;
void init()
{
    a.clear();
    a.resize(n + 1, vector<int> (m + 1));
    dd.clear();
    dd.resize(n + 1, vector<bool> (m + 1, 0));
    Yes = 0;
}
void dfs(pair<int,int> u, int pre, int turn)
{
    if (Yes) return;
    if (u == fn)
    {
        Yes = 1;
        return;
    }
    for(int i = 0; i < 4; i++)
    {
        pair<int, int> v = make_pair(u.first + b[i].first, u.second + b[i].second);
        if (v.first > 0 && v.first <= n && v.second > 0 && v.second <= m && dd[v.first][v.second] == 0 && a[v.first][v.second])
        {
            if (pre != -1 && pre != i && turn == 0) continue;
            dd[v.first][v.second] = 1;
            if (pre != -1 && pre != i) dfs(v, i, turn - 1);
            else dfs(v, i, turn);
            dd[v.first][v.second] = 0;
        }
    }
}
void solve()
{
    cin >> n >> m;
    init();
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++) 
        {
            char c;
            cin >> c;
            if (c == '*') a[i][j] = 0;
            else a[i][j] = 1;
            if (c == 'S') st = make_pair(i, j);
            if (c == 'T') fn = make_pair(i, j);
        }
    }
    dd[st.first][st.second] = 1;
    dfs(st, -1, 2);
    if (Yes) cout << "YES";
    else cout << "NO";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}