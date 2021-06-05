#include<bits/stdc++.h>
using namespace std;
int n, k, res = 0, tong;
int sum[20] = {}, sl[20] = {};
void chia(int gr, int vt)
{
    if (gr > k) 
    {
        if (vt == n) res++;   
        return;
    }
    for(int i = vt + 1; i <= n; i++)
    {
        if (sum[i] - sum[vt] == tong)
        {
            chia(gr + 1, i);
        } 
    }
}
int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        int so;
        cin >> so;
        sum[i] = sum[i - 1] + so;
    }
    if (sum[n] % k != 0) 
    {
        cout << 0;
        return 0;
    }
    tong = sum[n] / k;
    chia(1, 0);
    cout << res;
}