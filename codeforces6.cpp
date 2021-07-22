#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long res = 0;
        int k = n % 10;
        if(n <= 8) res = 0;
        else if(k == 9) res = (n - 9) / 10 + 1;
        else
        {
            n -= k - 1;
            res = (n - 9) / 10 + 1;
        }
        cout << res << endl;
    }
}