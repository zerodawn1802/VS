#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n, m, kq = 1003;
	cin >> n >> m;
	int a[52];
	for(int i = 1; i <= m ; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + m + 1);
	for(int i = 1; i <= m - n + 1; i++)
	{
		if(a[i + n - 1] - a[i] < kq)
		{
			kq = a[i + n - 1] - a[i];
		}
	}
	cout << kq;
	return 0;
}
