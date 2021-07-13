#include <bits/stdc++.h>
using namespace std;
main()
{
	int n, l;
	cin >> n >> l;
	int st = 0, fi = 0;
	for(int i = 0; i < n; i++)
	{
		int d, r, g;
		cin >> d >> r >> g;
		fi += (d - st);
		if(fi % (r + g) < r) fi += r - (fi % (r + g));
		st = d;
	}
	cout << fi + (l - st);
}
