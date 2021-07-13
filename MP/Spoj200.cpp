#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = (n + 1) / 2;
	for(int i = 1; i <= k; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j <= k)
			{
				if(j <= k - i || i <= k - j) cout << "*";
				else cout << "D";
			}
			else
			{
				if(j >= k + i || i <= j - k) cout << "*";
				else cout << "D";
			}
		}
		cout << endl;
	}
	for(int i = k + 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j <= k)
			{
				if(j <= i - k) cout << "*";
				else cout << "D";
			}
			else
			{
				if(i >= 3 * k - j) cout << "*";
				else cout << "D";
			}
		}
		cout << endl;
	}
}
