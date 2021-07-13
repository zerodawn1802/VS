#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a(4);
	cin >> a[1] >> a[2] >> a[3];
	int dd[102] = {0};
	for(int i = 0; i < 3; i++)
	{
		int s, f;
		cin >> s >> f;
		dd[s]++;
		dd[f]--;
	}
	dd[0] = 0;
	int tien = 0;
	for(int i = 1; i <= 100; i++)
	{
		dd[i] = dd[i] + dd[i - 1];
	}
	for(int i = 1; i <= 100; i++)
	{
		if(dd[i] != 0) tien += a[dd[i]] * dd[i];
	}
	cout << tien;
}
