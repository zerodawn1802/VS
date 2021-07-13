#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, k;
		cin >> n >> k;
		long long S = 0;
		for(int i = 1; i <= n; i++)
		{
			S += i;
		}
		if(S == k) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
