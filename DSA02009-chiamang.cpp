#include<bits/stdc++.h>
using namespace std;
int n, k, sum;
bool ok = 0;
vector<int> a, pre ;
vector<bool> dd;
void Try(int s, int tmp)
{
	if (ok) return;
	if (tmp == 0)
	{
		ok = 1;
		return;
	}
	for(int i = 0; i < n; i++)
	{
		if (s == sum) 
		{
			Try(0, tmp - 1);
			continue;
		}
		if (s > sum) return;
		Try(s + a[i], tmp);
	}
}
void process()
{
	cin >> n >> k;
	sum = 0;
	a.clear();
	a.resize(n);
	pre.clear();
	pre.resize(n + 1, -1);
	dd.clear();
	dd.resize(n + 1, 0);
	ok = 0;
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
		sum += a[i];
	}
	if (sum % k == 0)
	{
		sum /= k;
		Try(0, k);
		cout << ok << endl;
	}
	else cout << 0 << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--) process();
}