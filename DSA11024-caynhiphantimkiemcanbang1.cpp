#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i: a) cin >> i;
    sort(a.begin(), a.end());
    cout << a[(n - 1) / 2] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}