#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int tgup = 0, tgdown = 0;
	int umin = 50005, dmin = 50005;
	for(int i = 1; i <= n; i++)
	{
		int u, d;
		cin >> u >> d;
		tgup += u;
		tgdown += d;
		if(u < umin) umin = u;
		if(d < dmin) dmin = d;
	}
	tgup += dmin;
	tgdown += umin;
	if(tgup > tgdown) cout << tgup;
	else cout << tgdown;
}
