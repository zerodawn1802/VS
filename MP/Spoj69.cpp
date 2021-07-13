#include <bits/stdc++.h>
using namespace std;
int main()
{
	// your code goes here
	int n, m, a;
	cin >> n >> m >> a;
	int k = 1, l = 1;
	while(k * a < n && l * a < m)
	{
		if(k * a < n) k++;
		if(l * a < m) l++;
	}
	cout << l * k;
	return 0;
}
