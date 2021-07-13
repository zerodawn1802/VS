#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	if(n < m) cout << n << " " << (m - n) / 2;
	else if(n > m) cout << m << " " << (n - m) / 2;
	else if(n == m) cout << n << " 0";
}

