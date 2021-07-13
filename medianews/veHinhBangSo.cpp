#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int a[n + 2][n + 2];
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			a[i][j] = n - i;
		}
	}
	for(int j = 0; j < n; j++)
	{
		for(int i = j; i < n; i++)
		{
			a[i][j] = n - j;
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
