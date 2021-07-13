#include<bits/stdc++.h>
using namespace std;
int main()
{
	char x[100005];
	int a[100005], b[100005], n, i, dem = 0;
	cin >> x + 1;
	n = strlen(x + 1);
	a[0] = 0;
	for(i = 1; i <= n; i++)
	{
		int k;
		if(x[i] == '(') k = 1;
		else k = -1;
		a[i] = a[i - 1] + k;
	}
	if(a[n] != 2 && a[n] != -2)
	{
		cout << "0";
		return 0;
	}
	b[n] = a[n];
	for(i = n - 1; i >= 1; i--)
	{
		if(a[i] < b[i + 1]) b[i] = a[i];
		else b[i] = b[i + 1];
	}
	char c;
	if(a[n] > 0) c = '(';
	else c = ')';
	int u;
	if(c == '(') u = 1;
	else u = -1;
	for(i = 1; i <= n; i++)
	if(x[i] == c)
	{
		if(a[i - 1] - u >= 0 && b[i + 1] - 2 * u >= 0) dem++;
		if(a[i] < 0) break;
	}
	cout << dem;
}
