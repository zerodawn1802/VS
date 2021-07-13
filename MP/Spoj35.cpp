#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int a[100005];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++)
	{
		if(i == k)
		{
			cout << a[k];
			return 0;
		}
	}
}

