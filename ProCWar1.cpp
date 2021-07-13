#include <bits/stdc++.h>
using namespace std;
bool compare(const int a, const int b)
{
   return a < b;
}
//void quickSortF(long long a[], long long l, long long r)
//{
//	long long i = l, j = r;
//	long long p = a[(l + r) / 2];
//	while(i <= j)
//	{
//		while(a[i] > p) i++;
//		while(a[j] < p) j--;
//		if(i <= j)
//		{
//			long long tmp = a[i];
//			a[i] = a[j];
//			a[j] = tmp;
//		}
//	};
//	if(i < r) quickSortF(a, i, r);
//	if(l < j) quickSortF(a, l, j);
//}
int main ()
{
	int n, k;
	cin >> n >> k;
	long long a[n + 1];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long b[n + 1];
	b[0] = a[0];
	long long dem = 1;
	long long dd = 0;
	for(int i = 1; i < n; i++)
	{
		long long kt = 1;
		for(int j = 0; j <= dem; j++)
		{
			if(a[i] == b[j])
			{
				dd = j;
				kt = 1;
				break;
			}
			else 
			{
				dd = j;
				kt = 0;
			}
		}
		if(kt == 1)	continue;
		else
		{
			b[dd] = a[i];
			dem++;
		}	
	}
	sort(b, b + dem, compare);
	if(k <= dem)
	{
		cout << b[k - 1];
	}
	else cout << -1;
	return 0;
}
