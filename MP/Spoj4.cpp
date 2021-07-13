#include <bits/stdc++.h>
using namespace std;
void nenso(int n)
{
	while(n > 9)
	{
		int m = 0;
		for(int i = n; i != 0; i /= 10)
		{
			int b = i % 10;
			m += b;
		}
		n = m;
	}
	cout << n << endl;
}
int main()
{
	int T;
	cin >> T;
	for(int j = 1; j <= T; j++)
	{
		int n;
		cin >> n;
		nenso(n);
	}
	return 0;
}
