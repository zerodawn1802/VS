#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, k;
	cin >> n >> k;
	long long b = n % (k + 1);
	if(n % (k + 1) == 0 || b % 2 == 0 && b < k) cout << "Hanako";
	else cout << "Taro";
}
