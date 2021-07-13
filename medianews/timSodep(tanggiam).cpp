#include <bits/stdc++.h>
using namespace std;
int dd[1000006];
int n;
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
int process(int k)
{
	int m = k, scs = 0, x = 1, t = k;
	while(m != 0)
	{
		scs++;
		x *= 10;
		m /= 10;
	}
	x /= 10;
	if(scs == n)
	{
		int d = t / x, c = k % 10;
		if(d < c)
		{
			int b = k % 10, a;
			k /= 10;
			while(k != 0)
			{
				a = k % 10;
				k /= 10;
				if(a >= b) return false;
				else b = a;
			}
			return true;
		}
		else if(d > c)
		{
			int b = k % 10, a;
			k /= 10;
			while(k != 0)
			{
				a = k % 10;
				k /= 10;
				if(a <= b) return false;
				else b = a;
			}
			return true;
		}
		else if(d == c) return false;
	}
}
int main()
{
	snt();
	scanf("%d", &n);
	int dem = 0;
	for(int i = 0; i < 1000006; i++)
	{
		if(dd[i] == 1)
		{
			if(process(i) == true) dem++;
		}
	}
	printf("%d", dem);
}
