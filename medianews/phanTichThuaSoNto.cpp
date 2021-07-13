#include <bits/stdc++.h>
using namespace std;
int dd[1000006], a[1000006];
int k = 0;
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
	snt();
	int n;
	scanf("%d", &n);
	for(int i = 0; i < k && n != 1; i++)
	{
		if(n % a[i] == 0)
		{
			printf("%d ", a[i]);
			n /= a[i];
			i = -1;
		}
	}
}
