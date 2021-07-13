#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		cin >> n;
		for(int j = 1; j <= (n - 1) / 9; j++)
		{
			cout << "123456790";
		}
		int k = (n - 1) % 9;
		for(int j = 1; j <= k; j++)
		{
			cout << char(48 + j);
		}
		for(int j = k + 1; j >= 2; j--)
		{
			cout << char(48 + j);
		}
		for(int j = 1; j <= (n - 1) / 9; j++)
		{
			cout << "098765432";
		}
		cout << "1" << endl;
	}
}
