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
		int dem = 0;
		vector<int> u;
		for(int j = 1; j <= sqrt(n); j++)
		{
			if(n % j == 0 && j != n / j)
			{
				
				u.push_back(j);
				u.push_back(n / j);
			}
			else if(n % j == 0) u.push_back(j);
		}
		for(int j = 0; j < u.size(); j++)
		{
			if(u[j] % 2 == 0) dem++;
		}
		cout << dem << endl;
	}
}
