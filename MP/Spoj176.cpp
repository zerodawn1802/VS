#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long g, y, dai, rong, dt;
	cin >> g >> y;
	dt = (g + 4) * (g + 4) / 4 - 4 * (y + g);
	dai = ((g + 4) / 2 + sqrt(dt)) / 2;
	rong = (y + g) / dai;
	cout << rong << " " << dai;
}
