#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e6 + 1;
ll a[oo], k;
int n;
int main()
{
	int t;
	cin >> t;
	bool res;
	while (t--)
	{
		cin >> n >> k;
		res = 1;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == k && res)
			{
				cout << i + 1;
				res = 0;
			}
		}
		if (res) cout << "NO";
		cout << endl;
	}
}
