#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int m, n;
	cin >> m >> n;
	char cs[502][502];
	for(int i = 0; i < 5 * m + 1; i++)
	{
		for(int j = 0; j < 5 * n + 1; j++)
		{
			cin >> cs[i][j];
		}
	}
	int tt[5] = {0}, t = 0, tren = 1, duoi = 1;
	for(int i = 0; i < m; i++)
	{
		if(i != 0) tren += 5;
		duoi = 1;
		for(int j = 0; j < n; j++)
		{
			if(j != 0) duoi += 5;
			tt[0]++;
			for(int k = 0; k < 4; k++)
			{
				if(cs[tren + k][duoi] == '*')
				{
					tt[k + 1]++;
					tt[k]--;
				}
			}
		}
	}
	for(int i = 0; i < 5; i++) cout << tt[i] << " ";
	return 0;
}
