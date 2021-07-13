#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long x, y, z, p;
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		cin >> x >> y >> z;
		p = sqrt(x * y * z);
		cout << 4 * (p / x + p / y + p / z) << endl;
	}
}
