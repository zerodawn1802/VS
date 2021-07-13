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
		int c = 0;
		int x[9] = {500,200,100,50,20,10,5,2,1};
		for(int i = 0; i < 9; i++)
		{
			while(n >= x[i])
			{
				n -= x[i];
				c++;
			}
		}
		cout << c << endl;
	}
}

