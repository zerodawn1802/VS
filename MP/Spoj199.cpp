#include <bits/stdc++.h>
using namespace std;
struct tp
{
	int x;
	int y;
};
int main()
{
	int n;
	cin >> n;
	vector<tp> a(n);
	int max = 0, min = 1000000001;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i].x >> a[i].y;
		if(a[i].x <= min) min = a[i].x;
		if(a[i].y >= max) max = a[i].y;
	}
	int kt = 1;
	for(int i = 0; i < n; i++)
	{
		if(a[i].x == min && a[i].y == max)
		{
			kt = 0;
			cout << i + 1;
			return 0;
		}
	}
	if(kt == 1) cout << "-1";
}
