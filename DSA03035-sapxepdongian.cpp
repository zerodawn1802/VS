#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100005] = {};
    int f[100005] = {};
    for(int i = 1; i <= n; i++) cin >> a[i];
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        f[a[i]] = f[a[i] - 1] + 1;
        res = max(res, f[a[i]]);
    }
    cout << n - res;
	return 0;
}