#include<bits/stdc++.h>
using namespace std;
bool ok;
int dem = 0;
vector<vector<int> > kq;
vector<int> res;
void Try(vector<int> &a, int vt, int X)
{
    if (X < 0) return;
    if (X == 0)
    {
        dem++;
        ok = 1;
        kq.push_back(res);
        return;
    }
    for(int i = vt; i >= 0; i--)
    {
        res.push_back(a[i]);
        Try(a, i, X - a[i]);
        res.pop_back();
    }
}
void solve()
{
    int n, X;
    ok = 0;
    res.clear();
    kq.clear();
    dem = 0;
    cin >> n;
    X = n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) a[i] = i + 1;
    Try(a, n - 1, X);
    if (ok == 0) cout << -1;
    cout << dem << endl;
    for(vector<int> res: kq)
    {
        cout << "(";
        for(int i = 0; i < (int)res.size() - 1; i++) cout << res[i] << " ";
        cout << res.back() << ") ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}