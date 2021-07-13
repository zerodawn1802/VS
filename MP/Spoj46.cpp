#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int j = 1; j <= t; j++)
	{
		int n, x, y;
		cin >> n >> x >> y;
		int a[n][n];
		int dong = n, cot = n, k = 1, p = 0;
		while(k <= n*n)
		{
			for(int i = p; i < cot; i++) a[p][i] = k++;
			for(int i = p + 1; i < dong; i++) a[i][cot - 1] = k++;
			if (p != dong - 1)
			{
				for(int i = cot - 2; i >= p; i--) a[dong - 1][i] = k++;
			}	
			if(p != cot - 1)
			{
				for(int i = dong-2; i > p; i--) a[i][p] = k++;
			}	
			p++;
			dong--;
			cot--;
		}
		cout << a[x - 1][y - 1] << endl;
	}
}

