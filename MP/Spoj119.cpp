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
	for(int i = 2; i < 1000006; i++)
	{
		for(int j = 2 * i; j < 1000006; j += i)
		{
			dd[j] = 0;
		}
	}
}
int main()
{
	snt();
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n;
		cin >> n;
		int tong1 = 0, tong2 = 0;
		if(dd[n] == 1)
		{
			cout << "NO" << endl;
		}
		else if(dd[n] == 0)
		{
			vector<int> a;
			int m = n;
			while(n != 0)
			{
				int b = n % 10;
				tong1 += b;
				n /= 10;
			}
			for(int j = 2; j <= sqrt(m); j++)
			{
				if(m % j == 0)
				{
					while(m % j == 0)
					{
						a.push_back(j);
						m /= j;
					}
				}
			}
			if(m != 1) a.push_back(m);
			for(int j = 0; j < a.size(); j++)
			{
				if(a[j] <= 9)
				{
					tong2 += a[j];
				}
				else
				{
					while(a[j] != 0)
					{
						int c = a[j] % 10;
						tong2 += c;
						a[j] /= 10;
					}
				}
			}
			if(tong1 == tong2) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}
