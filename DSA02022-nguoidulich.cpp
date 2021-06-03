#include<bits/stdc++.h>
using namespace std;
int x[20][20] = {}, n, res = 1e9;
bool dd[20] = {};
void Try(int u, int sum, int dem)
{
    if (sum > res) return;
    if (dem == n)
    {
        res = min(res, sum + x[u][1]);
        return;
    }
    for(int v = 1; v <= n; v++)
    {
        if (dd[v] == 0)
        {
            dd[v] = 1;
            Try(v, sum + x[u][v], dem + 1);
            dd[v] = 0;
        }
    }
}
void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n ; j++) cin >> x[i][j];
    }
    dd[1] = 1;
    Try(1, 0, 1);
    cout << res;
}
int main()
{
    solve();
}