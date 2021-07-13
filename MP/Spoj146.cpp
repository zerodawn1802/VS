#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n], b[n - 1], c[n - 1];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(i > 0 && i < n - 1) b[i] = min(a[i], b[i - 1]);
		else if(i == 0) b[0] = a[0];
	}
	reverse(a, a + n);
	for (int i=0; i < n; i++)
	{
		if(i > 0 && i < n - 1) c[i] = max(a[i], c[i - 1]);
		else if(i == 0) c[0] = a[0];
	}
	reverse(c, c + n - 1);
	int S = -1000000000;
	for(int i = 0; i < n - 1; i++)
	{
		S = max(S, c[i] - b[i]);
	}
	cout << S;
}
