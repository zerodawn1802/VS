#include <bits/stdc++.h>
using namespace std;
int ktsnt (long a)
{
    if(a<=1) return 0;
    else
	{
        for (int i=2; i<=sqrt(a); i++)
		{
            if (a%i==0) return 0;
        }
    }
    return 1;
}
int main ()
{
    long n;
    scanf ("%ld", &n);
    for (long i=2; i<=sqrt (n); i++)
	{
        if (n%i==0)
		{
            if (ktsnt (i)==1)
			{
                long dem=0;
                while (n%i==0)
				{
                    n=n/i;
                    dem++;
                }
                printf ("%ld %ld\n", i, dem);
            }
        }
    }
    if (n!=1 && ktsnt (n)==1) printf ("%ld 1\n", n, 1);
    return 0;
}
