#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if(c - b >= 1)
	{
		if(b - a >= 1)
		{
			cout << a * 3 + 3;
			return 0;
		}
		else cout << b * 3;
	}
	else
	{
		if(c - a >= 2)
		{
			cout << 3 * a + 3;
		}
		else cout << 3 * c - 3;
	}
}
