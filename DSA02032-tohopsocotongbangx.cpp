#include<bits/stdc++.h>
using namespace std;
int dem;
vector<vector<int> > kq;
vector<int> res;
void Try(vector<int> &a, int vt, int X)
{
    if (X < 0) return;
    if (X == 0)
    {
        dem++;
        kq.push_back(res);
        return;
    }
    for(int i = vt; i < a.size(); i++)
    {
        res.push_back(a[i]);
        Try(a, i, X - a[i]);
        res.pop_back();
    }
}
void solve()
{
    int n, X;
    dem = 0;
    kq.clear();
    res.clear();
    cin >> n >> X;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    Try(a, 0, X);
    if (dem == 0) cout << -1;
    else
    {
        cout << dem << ' ';
        for(vector<int> res: kq)
        {
            cout << "{";
            for(int i = 0; i < (int)res.size() - 1; i++) cout << res[i] << " ";
            cout << res.back() << "} ";
        }
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