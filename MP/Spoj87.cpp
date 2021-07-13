#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = 1;
	int t = 1;
	int dem = 0;
	while(n >= k)
	{
		n -= k;
		dem++;
		t++;
		k += t;
	}
	cout << dem;
}

