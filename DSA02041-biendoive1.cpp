#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
bool check(int n)
{
    return (n % 2 == 0 && n / 2 == 1) || (n % 3 == 0 && n / 3 == 1) || (n - 1 == 1);
}
int bfs()
{
    queue<pair<int, int> > q;
    q.push(make_pair(n, 0));
    while (!q.empty())
    {
        int u = q.front().first;
        int way = q.front().second;
        q.pop();
        if (check(u))
            return way + 1;
        if (u % 3 == 0) q.push(make_pair(u / 3, way + 1));
        if (u % 2 == 0) q.push(make_pair(u / 2, way + 1));
        q.push(make_pair(u - 1, way + 1));
    }
}
void solve()
{
    cin >> n;
    cout << bfs() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}