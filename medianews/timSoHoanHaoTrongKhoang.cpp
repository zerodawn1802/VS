#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b)
	{
		for(int i = a; i <= b; i++)
		{
			int k = 1;
			for(int j = 2; j <= sqrt(i); j++)
			{
				if(i % j == 0 && j * j != i) k += (j + i /  j);
				else if(i % j == 0 && j * j == i) k += j;
			}
			if(k == i && i != 1) printf("%d ", i);
		}
	}
	else
	{
		for(int i = b; i <= a; i++)
		{
			int k = 1;
			for(int j = 2; j <= sqrt(i); j++)
			{
				if(i % j == 0 && j * j != i) k += (j + i /  j);
				else if(i % j == 0 && j * j == i) k += j;
			}
			if(k == i && i != 1) printf("%d ", i);
		}
	}
}
