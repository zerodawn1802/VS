#include <bits/stdc++.h>
using namespace std;
long long a, b;
long long process(long long a, long long b)
{
	if(b == 1) return a;
	long long s = process(a, b / 2) % 1000000007;
	s = s * s % 1000000007;
	if(b % 2 != 0) s = s * a % 1000000007;
	return s;
}
int main()
{
	cin >> a >> b;
	while(!(a == 0 && b == 0))
	{
		if(a == 0) cout << "0";
		else if(a == 1) cout << "1";
		else if(b == 0) cout << "1";
		else
		{
			cout << process(a, b);
		}
		cout << endl;
		cin >> a >> b;
	}
}
