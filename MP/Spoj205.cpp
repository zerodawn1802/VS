#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, a[100001], ti, teo, demti, demteo;
	cin >> n;
	long long s = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s += a[i];
	}
	demti = 0;
	demteo = 0;
	ti = s / 2;
	long i = 1;
	while(ti - a[i] >= 0)
	{
		ti -= a[i++];
		demti++;
	}
	teo = s / 2;
	int j = n;
	while(teo - a[j] >= 0)
	{
		teo -= a[j--];
		demteo++;
	}
	if(ti > teo) demti++;
	else if(ti < teo) demteo++;
	else if(i == j) demti++;
	cout << demti << " " << demteo;
}
