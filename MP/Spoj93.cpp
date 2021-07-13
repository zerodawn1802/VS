#include <bits/stdc++.h>
using namespace std;
int dd[10004];
void snt()
{
	for(int i = 0; i < 10004; i++)
	{
		dd[i] = 1;
	}
	dd[0] = dd[1] = 0;
	for(int i = 0; i < 10004; i++)
	{
		if(dd[i] == 0) continue;
		for(int j = i * 2; j <= 10004; j += i)
		{
			dd[j] = 0;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	snt();
	for(int i = 1; i <= t; i++)
	{
		int n;
		cin >> n;
		for(int i = 0; i < 10004 && n != 1; i++)
		{
			if(dd[i] == 1 && n % i == 0)
			{
				int x = 0;
				while(n % i == 0)
				{
					n /= i;
					x++;
				}
				if(n != 1) cout << i << " " << x << " ";
				else cout << i << " " << x;
			}
		}
		cout << endl;
	}
}

