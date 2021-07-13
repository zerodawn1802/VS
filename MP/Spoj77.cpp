#include <bits/stdc++.h>
using namespace std;
int a[15];
void process(string xau)
{
	for(int i=0; i < xau.length(); i++)
	{
		int tmp = xau[i]-'0';
		a[i+1]=tmp;
	}
}
int test(int a[], int n)
{
	for (int i=1, j=n; i<=n, j>=1; i++, j--)
	{
		if (i>j) break;
		if (a[i]!=a[j]) return 0;
	}
	return 1;
}
int as[15];
void timstr(int a[], int n)
{
	for(int i = 1; i <= n; i++) as[i] = a[i];
	while(1)
	{
		if(test(as, n) == 1) break;
		for(int i = 1, j = n; i <= n, j >= 1; i++, j--)
		{
			if(i >= j) break;
			if(as[i] >= as[j]) as[j] = as[i];
			else
			{
				as[j] = as[i];
				int tmp = (as[j - 1] + 1) / 10;
				as[j - 1]++;
				if(as[j - 1] >= 10)
				{
					tmp = 1;
					as[j - 1] %= 10;
				}
				else
				{
					tmp = 0;
					as[j - 1] %= 10;
				}
				if(tmp!=0)
				{
					int k = j - 1;
					while(tmp != 0)
					{
						as[k - 1]++;
						if(as[k - 1] >= 10)
						{
							tmp = 1;
							as[k - 1] %= 10;
						}
						else
						{
							tmp = 0;
							as[k - 1] %= 10;
						}
						k--;
					}
				}
			}
		}
	}
}
long chuyenso(int a[], int n)
{
	long S = 0;
	for(int i = 1; i <= n; i++)
	{
		S += a[i];
		if(i != n) S *= 10;
	}
	return S;
}
int main()
{
	string xau;
	while(1)
	{
		cin >> xau;
		if(xau == "0") break;
		process(xau);
		int n = xau.length();
		timstr(a, n);
		long p1 = chuyenso(a, n);
		long p2 = chuyenso(as, n);
		cout << p2 - p1 << endl;
	}
	return 0;
}
