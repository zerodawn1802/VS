#include <bits/stdc++.h>
using namespace std;
void quickSort(long long a[], long long l, long long r)
{
	long long i = l, j = r;
	long long z = a[(l + r) / 2];
	while(i <= j)
	{
		while(a[i] < z) i++;
		while(a[j] > z) j--;
		if(i <= j)
		{
			long long tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	};
	if(i < r) quickSort(a, i, r);
	if(l < j) quickSort(a, l, j);
}
int main()
{
	long long n, k, y;
	cin >> n >> k >> y;
	long long p[100005];
	vector<long long> a, b;
	long long dem = 0;
	for(long long i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	quickSort(p, 0, n - 1);
	for(long long i = 0; i < n; i++)
	{
		if(p[i] <= k) a.push_back(p[i]);
		else b.push_back(p[i]);
	}
	long long kk = k;
	for(long long i = a.size() - 1; i >= 0; i--)
	{
		if(kk - a[i] <= y)
		{
			dem++;
			kk = a[i];
		}
	}
	for(long long i = 0; i < b.size(); i++)
	{
		if(b[i] - k <= y)
		{
			dem++;
			k = b[i];
		}
	}
	cout << dem;
}
