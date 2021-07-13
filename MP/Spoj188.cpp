#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> d(n);
	for(int i = 0; i < n; i++)
	{
		cin >> d[i];
	}
	int a = d[k], dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(d[i] >= a && d[i] > 0) dem++;
	}
	cout << dem;
}
