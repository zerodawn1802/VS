#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n], dem = 1, tgc = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 1; i < n; i++)
	{
		tgc += a[i - 1];
		if(a[i] >= tgc) dem++;
		else
		{
			tgc -= a[i];
		}
	}
	cout << dem;
}
