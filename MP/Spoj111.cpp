#include <bits/stdc++.h>
using namespace std;
int n;
void process()
{
	vector<long long> a(10000007);
	vector<long long> b;
	cin >> n;
	for(int j = 0; j < n; j++)
	{
		cin >> a[j];
		if(a[j] != 0) b.push_back(a[j]);
	}
	for(int j = 0; j < b.size(); j++)
	{
		cout << b[j] << " ";
	}
	for(int j = b.size(); j < n; j++)
	{
		cout << 0 << " ";
	}
	cout << endl;
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
