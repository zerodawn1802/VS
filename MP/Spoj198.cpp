#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	if(k % (n - 1) == 0) cout << (n * (k / (n - 1)) - 1) << " " << n * (k / (n - 1)); 
	else cout << k + (k / (n - 1)) << " " << k + (k / (n - 1));	
}
