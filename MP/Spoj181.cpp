#include <bits/stdc++.h>
using namespace std;
int dd[1000006];
int max(int n)
{
	for(int i = 1; i <= n; i++)
	{
		dd[i] = 1;
	}
	for(int i = 3; i <= n; i += 7)
	{
		for(int j = i; j <= i + 4; j++)
		{
			dd[j] = 0;
		}
	}
	int max = 0;
	for(int i = 1; i <= n; i++)
	{
		if(dd[i] != 0) max++;
	}
	return max;
}
int min(int n)
{
	for(int i = 1; i <= n; i++)
	{
		dd[i] = 1;
	}
	for(int i = 1; i <= n; i += 7)
	{
		for(int j = i; j <= i + 4; j++)
		{
			dd[j] = 0;
		}
	}
	int min = 0;
	for(int i = 1; i <= n; i++)
	{
		if(dd[i] != 0) min++;
	}
	return min;
}
int main()
{
	int n;
	cin >> n;
	cout << min(n) << " " << max(n);
}
