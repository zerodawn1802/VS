#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int a[100005];
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int m = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0) m++;
	}
	int b;
	if(k > m)
	{
		b = k - m;
		int c = 0;
		for(int i = 0; i < n; i++)
		{
			if(c < m)
			{
				tong -= a[i];
				c++;
			}
			else
			{
				if(b % 2 == 0)
				{
					tong += a[i];
					b = 2;
				}
				else
				{
					tong -= a[i];
					b = 2;
				}
			}
		}
	}
	else
	{
		int c = 0;
		for(int i = 0; i < n; i++)
		{
			if(c < k)
			{
				tong -= a[i];
				c++;
			}
			else
			{
				tong += a[i];
			}
		}
	}
	cout << tong;
}

