#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int a[n + 1];
		for(int i = 0; i < n; i++) cin >> a[i];
		int l[n + 1], r[n + 1];
		stack <int> s1;
		for(int i = 0; i < n; i++)
		{
			while(!s1.empty() && a[s1.top()] >= a[i])
			{
				s1.pop();
			}
			if(s1.empty()) l[i] = -1;
			else l[i] = s1.top();
			s1.push(i);
		}
		stack <int> s2;
		for(int i = n - 1; i >= 0; i--)
		{
			while(!s2.empty() && a[s2.top()] >= a[i])
			{
				s2.pop();
			}
			if(s2.empty()) r[i] = n;
			else r[i] = s2.top();
			s2.push(i);
		}
		int x = 0, y = 0, res = 0;
		for(int i = 0; i < n; i++)
		{
			if((r[i] - l[i] - 1) * a[i] > res)
			{
				res = (r[i] - l[i] - 1) * a[i];
				x = l[i];
				y = r[i];	
			}
		}
		cout << res << " " << x + 2 << " " << y << endl;
	}
 	return 0;
}
