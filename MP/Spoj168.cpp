#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> b(n + 1);
	for(int i = 1; i <= n; i++)
	{
		cin >> b[i];
	}
	b[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		cout << b[i] * i - b[i - 1] * (i - 1) << " ";
	}
}
