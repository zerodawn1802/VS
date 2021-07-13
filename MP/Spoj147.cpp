#include <bits/stdc++.h>
using namespace std;
typedef struct dt
{
	int vt;
	int dd[25];
};
dt a[300005];
void process()
{
	long n, k;
	cin >> n >> k;
	a[0].vt = 0;
	for (int i = 1; i <= 20; i++)
	{
		a[0].dd[i] = 0;
	}
	for (long i = 1; i <= n; i++)
	{
		string tmp;
		cin >> tmp;
		int len = tmp.size();
		arr[i].vt = len;
		for(int j = 2; j <= 20; j++)
		{
			a[i].dd[j] = a[i - 1].dd[j];
		}
		a[i].dd[len]++;
	}
	long long sbt = 0;
	for(long i = 1; i <= n; i++)
	{
		int len = a[i].vt;
		if(i > k)
		{
			sbt += (a[i].dd[len] - a[i - k - 1].dd[len] - 1);
		}
		else
		{
			sbt += (a[i].dd[len] - a[0].dd[len] - 1);
		}
	}
	cout << sbt;
}
int main ()
{
	process();
	return 0;
}
