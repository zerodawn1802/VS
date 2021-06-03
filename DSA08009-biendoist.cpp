#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int s, t;
    cin >> s >> t;
    queue<pair<int, int> > q;
    set<int> dd;
    dd.insert(s);
    q.push(make_pair(s, 0));
    while (!q.empty())
    {
        int u = q.front().first;
        int way = q.front().second;
        q.pop();
        if (u - 1 == t || u * 2 == t) 
        {
            cout << way + 1 << endl;
            return;
        }

        if (u == t)
        {
            cout << way << endl;
            return;
        }
        if (u * 2 <= t * 2 && dd.count(u * 2) == 0)
        {
            q.push(make_pair(u * 2, way + 1));
            dd.insert(u * 2);
        }
        if (u - 1 > 0 && dd.count(u - 1) == 0)
        {
            q.push(make_pair(u - 1, way + 1));
            dd.insert(u - 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}