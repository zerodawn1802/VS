#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	int k = 1, t = 1;
	while(n > k)
	{
		n -= k;
		dem++;
		t++;
		k += t;
	}
	cout << dem;
}
