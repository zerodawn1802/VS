#include<bits/stdc++.h>
using namespace std;
void qs(long long a[], long long l, long long r)
{
	long long i = l, j = r, x = a[(l + r) / 2], y;
	do
    {
    	while(a[i] < x && i < r) i++;
    	while(a[j] > x && j > l) j--;
    	if(i <= j)
        {
        	y = a[i]; a[i] = a[j]; a[j] = y;
        	i++;
			j--;
        }
    }while(i <= j);
	if(l < j) qs(a, l, j);
	if(i < r) qs(a, i, r);
}
int main()
{
	long long n, m, i, tcc = 0, smin = 0;
	cin >> n >> m;
	long long a[n + 2];
	for(i = 1; i <= n; i++)
	{
		cin >> a[i];
		tcc += a[i];
	}
	qs(a, 1, n);
	a[0] = 0;
	long long t = n + 1;
	for(i = 1; i <= n; i++)
	{
		smin += (a[i] - a[i - 1]) * (t - i);
		if(tcc - smin < m) break;
	}
	smin -= (a[i] - a[i - 1]) * (t - i);
	long long lech = (tcc - smin - m) / (t - i);
	cout << a[i - 1] + lech;
}
