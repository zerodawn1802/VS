#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<int> > x(n);
    for(int i =0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int so;
            cin >> so;
            if (so) x[i].push_back(j + 1);
        }
    for(int i = 0; i < n; i++) 
    {
        for(int j: x[i]) cout << j << ' ';
        cout << endl;
    }
}
int main()
{
    solve();
}