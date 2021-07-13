#include <bits/stdc++.h>
using namespace std;
int ucln(int x, int y)
{
	while(x * y != 0)
	{
		if(x > y) x = x % y;
		else y = y % x;
	}
	return x + y;
}
int main()
{
	int n;
	cin >> n;
	int a[102], g[100005], d = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int k = abs(a[1] - a[2]);
	for(int i = 3; i <= n; i++)
	{
		k = ucln(k, abs(a[i] - a[i - 1]));
	}
	for(int i = 1; i <= sqrt(k); i++)
	{
		if(k % i == 0)
		{
			g[d++] = i;
			int h = k / i;
			if(h != i) g[d++] = h;
		}
	}
	sort(g + 1, g + d + 1);
	for(int i = 2; i <= d; i++)
	{
		cout << g[i] << " ";
	}
}
