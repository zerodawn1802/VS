#include <bits/stdc++.h>
using namespace std;
long long a[1000006];
void quickSortF(long long a[], long long l, long long r)
{
	long long i = l, j = r;
	long long p = a[(l + r) / 2];
	while(i <= j)
	{
		while(a[i] > p) i++;
		while(a[j] < p) j--;
		if(i <= j)
		{
			long long tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	};
	if(i < r) quickSortF(a, i, r);
	if(l < j) quickSortF(a, l, j);
}
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	quickSortF(a, 0, n - 1);
	long long res = a[0];
	for(int i = 1; i < n; i++)
	{
		if(k != 0)
		{
			res += a[i];
			k--;
		}
		else res -= a[i];
	}
	printf("%lld", res);
}
