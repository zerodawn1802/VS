#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool ok[1005];
void BFS(int s)
{
    queue<int> q;
    q.push(s);
    ok[s] = true;
    while(q.empty() == false)
    {
        int u = q.front(); q.pop();
        cout << u << " ";
        for(int i = 0; i < ke[u].size(); i++)
        {
            int v = ke[u][i];
            if(ok[v] == false)
            {
                q.push(v);
                ok[v] = true;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 0; i < 1005; i++) ke[i].clear();
        memset(ok, false, sizeof(ok));
        int a, b, nguon;
        cin >> a >> b >> nguon;
        for(int i = 0; i < b; i++)
        {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        cout << "BFS(" << nguon <<") = ";
        BFS(nguon);
        cout << endl;
    }
}