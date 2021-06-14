#include <bits/stdc++.h>
using namespace std;
vector<string> q, a;
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        q.push_back(str);
        cin >> str;
        a.push_back(str);
    }
    for(int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < n; j++)
        {
            if(q[j] == s) cout << a[j] << endl;
        }
    }
}