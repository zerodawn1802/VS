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
			int n = i;
			int tong = 0;
			while(n != 0)
			{
				int k = n % 10;
				n /= 10;
				int c = 1;
				for(int i = 1; i <= k; i++) c *= i;
				tong += c;
			}
			if(tong == i)
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
			int n = i;
			int tong = 0;
			while(n != 0)
			{
				int k = n % 10;
				n /= 10;
				int c = 1;
				for(int i = 1; i <= k; i++) c *= i;
				tong += c;
			}
			if(tong == i)
			{
				printf("%d ", i);
				kt = 1;
			}
		}
		if(kt == 0) printf("0");
	}
	return 0;
}
