#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int a[n] = {};
	bool dd[1000006] = {};
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if (dd[a[i]]) continue;
		cout << a[i] << ' ';
		dd[a[i]] = 1;
	}
}
int main()
{
	solve();
}