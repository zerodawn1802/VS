#include <bits/stdc++.h>
using namespace std;
long long count(long long N)
{
    long long d = 0;
    long long c = sqrt(N);
    long long l, r;
    long long x, y;
    for(long long i = 2; i <= c; i++)
    {
        if(N % i == 0)
        {
            x = N / i;
            y = i;
            if((y + x - 1) % 2 == 0)
            {
                r = (y + x - 1) / 2;
                l = x - r;
                if(l >= 1 && r > l) d++;
            }
        }
    }
    return d;
}
int main()
{
    int t;
    cin >> t;
    int n;
    long long X;
    while(1)
    {
        if(t == 0) break;
        t--;
        cin >> n;
        cin >> X;
        cout<< n << " " << count(2*X) << endl;
    }
    return 0;
}
