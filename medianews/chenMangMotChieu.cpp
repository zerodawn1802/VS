#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, p;
	scanf("%d%d%d", &n, &m, &p);
	int a[n + 2], b[m + 2];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < m; i++) scanf("%d", &b[i]);
	int c[n + m + 2];
	for(int i = 0; i < p; i++)
	{
		c[i] = a[i];
	}
	for(int i = p; i < m + p; i++)
	{
		c[i] = b[i - p];
	}
	for(int i = p + m; i < n + m; i++)
	{
		c[i] = a[i - m];
	}
	for(int i = 0; i < n + m; i++)
	{
		printf("%d ", c[i]);
	}
}
