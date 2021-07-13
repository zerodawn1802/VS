#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    long dd[11] = {0};
    int a, b, c, d, p;
    cin >> n;
    cin >> a >> b;
    long k = 1;
    if(a > b) p = a;
    else p = b;
    dd[a] = 1;
    dd[b] = 1;
    for(long i = 2; i <= n; i++)
    {
        cin >> c >> d;
        if(c == a || c == b) dd[c]++;
        else dd[c] = 1;
        if(k < dd[c] || k == dd[c] && p > c)
		{
			k = dd[c];
			p = c;
		}
        if(d != c)
        {
            if(d == a || d == b) dd[d]++;
            else dd[d] = 1;
            if(k < dd[d] || k == dd[d] && p > d)
			{
				k = dd[d];
				p = d;
			}
        }
        a = c;
        b = d;
    }
    cout << k << " " << p;
}
