#include<bits/stdc++.h>
using namespace std;
int n, a[1000006];
bool kt(int a[], int p, int l, int r)
{
    if(l > r) return false;
    int x = (l + r) / 2;
    if(a[x] == p) return true;
    else if(a[x] < p) return kt(a, p, x + 1, r);
    else return kt(a, p, l, x - 1);
}
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(kt(a, a[i] + a[j], j + 1, n - 1) == true) cout<< a[i] << " " << a[j] << endl;
        }
    }
}
