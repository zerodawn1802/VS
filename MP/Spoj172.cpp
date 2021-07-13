#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
	int tg;
	tg = a;
	a = b;
	b = tg;
}
int main()
{
	int n, a[102], dem = 0, dd;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int d = 1, m = n;
	while(d <= m)
	{
		if(a[d] == d)
		{
			cout << 0 << endl;
			d++;
		}
		else
		{
			dem = 0;
			for(int i = d + 1; i <= n; i++)
			{
				if(a[i] == d)
				{
					dd = i;
					break;
				}
			}
			for(int i = dd; i > d; i--)
			{
				swap(a[i], a[i - 1]);
				dem++;
			}
			cout << dem << endl;
			d++;
		}
		if(d > m) break;
		if(a[m] == m)
		{
			cout << 0 << endl;
			m--;
		}
		else
		{
			dem = 0;
			for(int i = m - 1; i >= 1; i--)
			{
				if (a[i] == m)
				{
					dd = i;
					break;
				}
			}
			for(int i = dd; i < m; i++)
			{
				swap(a[i], a[i + 1]);
				dem++;
			}
			cout << dem << endl;
			m--;
		}
	}
}
