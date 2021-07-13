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
	for(int i = 0; i < 1000006; i++)
	{
		if(dd[i] == 0) continue;
		else if(dd[i] == 1)
		{
			a[k] = i;
			k++;
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n + 1][n + 1];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	}
	
}
