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
		for(int j = i * 2; j < 1000006; j += i)
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
		for(int j = 1; j <= n / 2; j++)
		{
			if(dd[j] == 1 && dd[n - j] == 1)
			{
				cout << j << " " << n - j << endl;
				break;
			}
		}
	}
}
