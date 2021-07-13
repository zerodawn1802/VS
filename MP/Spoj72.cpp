#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	while(!(a == 0 && b == 0 && c == 0 && d == 0))
	{
		int k = 0;
		while(!(a == b && b == c && c == d && d ==a))
		{
			int e = a;
			a = abs(a - b);
			b = abs(b - c);
			c = abs(c - d);
			d = abs(d - e);
			k++;
		}
		cout << k << endl;
		cin >> a >> b >> c >> d;
	}
}

