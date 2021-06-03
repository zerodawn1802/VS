#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const pair<int, int> b[8] = {make_pair(-2, 1), make_pair(-1, 2), make_pair(1, 2), make_pair(2, 1), make_pair(2, -1), make_pair(1, -2), make_pair(-1, -2), make_pair(-2, -1)};
pair<int, int> st, fn;
int bfs()
{
    bool dd[9][9] = {};
    queue<pair<pair<int, int> , int> > q;
    q.push(make_pair(st, 0));
    dd[st.first][st.second] = 1;
    while(!q.empty())
    {
        pair<int,int> u = q.front().first;
        int way = q.front().second;
        q.pop();
        if (u == fn) return way;
        for(int i = 0; i < 8; i++)
        {
            pair<int, int> v = make_pair(u.first + b[i].first, u.second + b[i].second);
            if (v.first > 0 && v.first < 9 && v.second > 0 && v.second < 9 && !dd[v.first][v.second])
            {
                dd[v.first][v.second] = 1;
                q.push(make_pair(v, way + 1));
            }
        }
    }
}
void solve()
{
    string s;
    cin >> s;
    st.first = s[0]-'a' + 1; st.second = s[1] - '0';
    cin >> s;
    fn.first = s[0]-'a' + 1; fn.second = s[1] - '0';
    cout << bfs() << endl; 
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}