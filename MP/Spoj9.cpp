#include <bits/stdc++.h>
long long ucln(long long a, long long b)
{
    while (b!=0)
	{
        long long x = a%b;
        a = b;
        b = x;
    }
    return a;
}
long long bcnn(long long a, long long b)
{
    long long x = ucln (a, b);
    return (a*b)/x;
}
int main()
{
    long long a;
    long long b;
    do
	{
        scanf ("%lld%lld", &a, &b);
        if (a==0 && b==0) break;
        printf ("%lld %lld\n", ucln (a, b), bcnn (a, b));
    } while (1);
    return 0;
}
