#include <bits/stdc++.h>
using namespace std;
void process()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int min = 100, max = -1;
	for(int j = 0; j < n; j++)
	{
		cin >> a[j];
		if(a[j] >= max) max = a[j];
		if(a[j] <= min) min = a[j];
	}
	cout << (max - min)*2 << endl;
}
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		process();
	}
}
