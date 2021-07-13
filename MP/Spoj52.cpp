#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n;
		cin >> n;
		int b;
		int x = 1;
		while(n >= 10)
		{

			b = n % 10;
			if(b >= 5)
			{
				n = n / 10 + 1;
				x *= 10;
			}
			else
			{
				n = n / 10;
				x *= 10;
			}
		}
		cout << n * x << endl;
	}
}

