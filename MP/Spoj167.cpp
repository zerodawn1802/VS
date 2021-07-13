#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = i; j <= n; j++)
		{
			int so = sqrt(i * i + j * j);
			if(i * i == so * so - j * j && so <= n)
			{
				dem++;
			}
		}
	}
	cout << dem;
	return 0;
}
