#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while(n != 0)
	{
		int dd[102] = {0};
		for(int i = 1; i <= n; i++)
		{
			int a, b, c, d, e, f;
			cin >> a >> b >> c >> d >> e >> f;
			dd[a]++;
			dd[b]++;
			dd[c]++;
			dd[d]++;
			dd[e]++;
			dd[f]++;
		}
		int dem = 0;
		for(int i = 1; i <= 49; i++)
		{
			if(dd[i] != 0) dem++;
		}
		if(dem == 49) cout << "Yes" << endl;
		else cout << "No" << endl;
		cin >> n;
	}
}
