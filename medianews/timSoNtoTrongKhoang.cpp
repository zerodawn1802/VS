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
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b)
	{
		for(int i = a; i <= b; i++)
		{
			if(dd[i] == 1) printf("%d ", i);
		}
	}
	else
	{
		for(int i = b; i <= a; i++)
		{
			if(dd[i] == 1) printf("%d ", i);
		}
	}
}
