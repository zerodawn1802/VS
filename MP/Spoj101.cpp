#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int x[4], y[4], z[4];
		for(int j = 0; j < 4; j++)
		{
			cin >> x[i] >> y[i] >> z[i];
		}
		int a1, b1, c1, a2, b2, c2;
		a1 = x[1] - x[0]; b1 = y[1] - y[0]; c1 = z[1] - z[0];
		a2 = x[2] - x[0]; b2 = y[2] - y[0]; c2 = z[2] - z[0];
		int vtx, vty, vtz;
		vtx = b1 * c2 - b2 * c1; vty= c1 * a2 - c2 * a1; vtz = a1 * b2 - a2 * b1;
		int k = vtx * (x[3] - x[0]) + vty * (y[3] - y[0]) + vtz * (z[3] - z[0]);
		if(k == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
