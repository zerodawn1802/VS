#include <bits/stdc++.h>
using namespace std;
long long Fi[] = {1ll, 1ll, 2ll, 6ll, 24ll, 120ll, 720ll, 5040ll, 40320ll, 362880ll, 3628800ll, 39916800ll, 479001600ll, 6227020800ll, 87178291200ll};
void res(int *x, int n, int m, long long k)
{
    if(n == 0) return;
    int p = int(k / Fi[n - 1]), d = 0, i;
    for(i = 1; i <= m; i++)
    if(x[i] == 0)
    {
        d++;
        if(d == p + 1) break;
    }
    x[i] = 1;
    cout << i << " ";
    res(x, n - 1, m, k % Fi[n - 1]);
}
long long process(int *x, int n)
{
    int y[20];
    for(int i = 1; i <= n; i++) y[i] = 0;
    long long k = 0;
    for(int i = 1; i <= n; i++)
    {
        int d = 0;
        for(int j = 1; j <= x[i]; j++)
        if(y[j] == 0) d++;
        k = k + (d - 1) * Fi[n - i];
        y[x[i]] = 1;
    }
    return k + 1;
}
struct loai
{
    int n, q;
    long long k;
};
int main()
{
    int b = 0, x[20];
    loai a[30000];
    do
    {
        b++;
        cin >> a[b].n;
        if(a[b].n == 0) break;
        cin >> a[b].q;
        if(a[b].q == 1)
        {
            for(long i = 1; i <= a[b].n; i++)
            {
                cin >> x[i];
            }
            a[b].k = process(x, a[b].n);
        }
        else
        {
            cin >> a[b].k;
        }
    }while(1);
    for(int i = 1; i < b; i++)
    {
        if(a[i].q == 1) cout << a[i].k << endl;
        else
        {
            for(int j = 1; j <= a[i].n; j++) x[j] = 0;
            res(x, a[i].n, a[i].n, a[i].k - 1);
            cout << endl;
        }
    }
}
