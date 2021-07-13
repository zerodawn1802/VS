#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int dd[3005] = {0};
	for(int i = 0; i < n; i++)
	{
		dd[a[i]] = 1;
	}
	for(int i = 0; i < n; i++)
	{
		if(dd[a[i]] == 0)
		{
			cout << a[i];
			return 0;
		}
	}
	cout << n + 1;
}

