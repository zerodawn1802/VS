#include <bits/stdc++.h>
using namespace std;
int dd[1000006];
void snt()
{
	for(int i = 0; i < 1000006; i++)
	{
		dd[i] = 1;
	}
	dd[0] = dd[1] = 0;
	for(int i = 0; i < 1000006; i++)
	{
		if(dd[i] == 0) continue;
		for(int j = i * 2; j < 1000006; j += i) dd[j] = 0;
	}
}
int main()
{
	snt();
	int n, res = 0;
	scanf("%d", &n);
	int a[n + 2][n + 2];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
			if(i <= j && dd[a[i][j]] == 1) res += a[i][j];
		}
	}
	printf("%d", res);
}
