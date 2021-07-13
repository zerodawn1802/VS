#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = 0;
	while(n != 0)
	{
		k++;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int dem = 0;
		int l = 0;
		while(l == 0)
		{
			int m = a[0];
			int c = 0;
			for(int i = 0; i < n - 1; i++)
			{
				if(a[i] != a[i + 1])
				{
					c++;
					break;
				}
			}
			if(c == 0 || dem == 1000) break;
			for(int i = 0; i < n - 1; i++)
			{
				a[i] = abs(a[i] - a[i + 1]);
			}
			a[n - 1] = abs(a[n - 1] - m);
			dem++;
		}
		if(dem == 1000) cout << "Case " << k << ": not attained" << endl;
		else cout << "Case " << k << ": " << dem << " iterations" << endl;
		cin >> n;
	}
}

