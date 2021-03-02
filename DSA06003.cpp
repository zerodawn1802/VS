#include <bits/stdc++.h>
using namespace std;
struct data
{
    int gt, pos;
};
bool cmp(data a, data b)
{
    if(a.gt < b.gt) return true;
    if(a.gt == b.gt && a.pos < b.pos) return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<data> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].gt;
            a[i].pos = i;
        }
        sort(a.begin(), a.end(), cmp);
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            while(a[i].pos != i)
            {
                res++;
                swap(a[i], a[a[i].pos]);
            }
        }
        cout << res << endl;
    }
}