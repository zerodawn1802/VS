#include<bits/stdc++.h>
using namespace std;
int n, s;
vector<int> x;
bool check = 0;
void Try(int vt, int sum, int s, int dem)
{   
    if (check) return; 
    if (sum > s) return;
    if (sum == s)
    {
        check = 1;
        cout << dem << endl;
        return;
    }
    for(int i = vt; i < x.size(); i++)
    {
        Try(i + 1, sum + x[i], s, dem + 1);
    }
}
void process()
{
    cin >> n >> s;
    check = 0;
    x.clear();
    x.resize(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    sort(x.begin(), x.end(), greater<int>() );
    Try(0, 0, s, 0);
    if (!check) cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) process();
}