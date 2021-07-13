#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, s = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		int l, r;
		cin >> l >> r;
		s += r - l + 1;
	}
	if(s % k != 0) cout << k - s % k;
	else cout << "0";
}
