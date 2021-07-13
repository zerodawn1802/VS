#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, i, k ,d;
		cin >> n >> i >> k >> d;
		if(n <= k) cout << "NO" << endl;
		else if(n <= 2*k)
		{
			if(i > d) cout << "YES." << endl;
			else cout << "NO" << endl;
		}
		else
		{
			int a;
			if(n % k == 0) a = n / k;
			else a = n / k + 1;
			if(d < (a - 1)*i) cout << "YES." << endl;
			else cout << "NO" << endl;
		}
	}
}
