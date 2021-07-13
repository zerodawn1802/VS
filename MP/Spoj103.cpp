#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n, dd[101];
		cin >> n;
		for(int j = 1; j <= n; j++)
		{
			dd[j] = 0; //o cua mo
		}
		int k = 1;
		k++;
		while(k <= n)
		{
			for(int j = 2; j <= n; j++)
			{
				if(j % k == 0)
				{
					if(dd[j] == 0) dd[j] = 1;
					else if(dd[j] == 1) dd[j] = 0;
				}
			}
			k++;
		}
		int dem = 0;
		for(int j = 1; j <= n; j++)
		{
			if(dd[j] == 0) dem++;
		}
		cout << dem << endl;
	}
}
