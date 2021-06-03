#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    set<int> s;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int so;
        cin >> so;
        a.push_back(so);
        s.insert(so);
    }
    int i = 0;
    for(set<int> ::iterator it = s.begin(); it != s.end(); it++, i++) 
    {
        if (*it != a[i]) 
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
}