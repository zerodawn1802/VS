#include <bits/stdc++.h>
using namespace std;
int main()
{
	int d1x, d1y, d2x, d2y, d3x, d3y, d4x, d4y;
	cin >> d1x >> d1y >> d2x >> d2y >> d3x >> d3y;
	if(d1x == d2x) cout << d3x << " ";
	else if(d2x == d3x) cout << d1x << " ";
	else if(d1x == d3x) cout << d2x << " ";
	if(d1y == d2y) cout << d3y;
	else if(d1y == d3y) cout << d2y;
	else if(d2y == d3y) cout << d1y;
}
