#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, kt = 0;
	scanf("%d%d", &a, &b);
	if(a < b)
	{
		for(int i = a; i <= b; i++)
		{
			int scs = 0, n = i, m = i;
			while(n != 0)
			{
				scs++;
				n /= 10;
			}
			int sokt = 0;
			while(m != 0)
			{
				int t = 1;
				int k = m % 10;
				for(int i = 1; i <= scs; i++) t *= k;
				sokt += t;
				m /= 10;
			}
			if(sokt == i)
			{
				printf("%d ", i);
				kt = 1;
			}
		}
		if(kt == 0) printf("0");
	}
	else
	{
		for(int i = b; i <= a; i++)
		{
			int scs = 0, n = i, m = i;
			while(n != 0)
			{
				scs++;
				n /= 10;
			}
			int sokt = 0;
			while(m != 0)
			{
				int t = 1;
				int k = m % 10;
				for(int i = 1; i <= scs; i++) t *= k;
				sokt += t;
				m /= 10;
			}
			if(sokt == i)
			{
				printf("%d ", i);
				kt = 1;
			}
		}
		if(kt == 0) printf("0");
	}
}
