#include <bits/stdc++.h>
using namespace std;
long long n, a[100005], dd[100005];
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
			i++; j--;
		}
	};
	if(i < r) quickSortF(a, i, r);
	if(l < j) quickSortF(a, l, j);
}
void quickSort(long long a[], long long l, long long r)
{
	long long i = l, j = r;
	long long p = a[(l + r) / 2];
	while(i <= j)
	{
		while(a[i] < p) i++;
		while(a[j] > p) j--;
		if(i <= j)
		{
			long long tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++; j--;
		}
	};
	if(i < r) quickSort(a, i, r);
	if(l < j) quickSort(a, l, j);
}
int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		dd[a[i]] = i;
	}
	quickSortF(a, 0, n - 1);
	for(int i = 0; i < n - 1; i++)
	{
		a[i] = a[i] - a[i + 1];
	}
	quickSort(a, 0, n - 2);
	long long dem = 0;
	for(int i = 0; i < n - 1; i++)
	{
		if(dd[a[i]] == i) dem++;
	}
	cout << dem;
}
