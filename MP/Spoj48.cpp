#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int t[10004], d = 0;
	for(int i = 2; i <= n; i++)
	{
		t[i] = 1;
	}
	for(int i = 2; i <= n; i++)
	{
		if(t[i] == 0) continue;
		for(int j = i; j <= n; j += i)
		{
			if(t[j] == 0) continue;
			else
			{
				t[j] = 0;
				d++;
				if(d == k)
				{
					cout << j;
					return 0;
				}
			}
		}
	}
}

