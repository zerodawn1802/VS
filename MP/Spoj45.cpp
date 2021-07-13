#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a[1000], l[1000];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	l[0] = 1;
	int lmax;
	for(int i = 0; i < n; i++)
	{
		lmax = 0;
		for(int j = 0; j < i; j++)
		{
			if(a[i] > a[j])
			{
				if(l[j] > lmax)
				{
					lmax=l[j];
				}
			}
		}
		l[i] = lmax + 1;
	}
	sort(l, l + n);
	cout << l[n - 1];
	return 0;
}
