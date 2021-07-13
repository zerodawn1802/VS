#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	if(n % 2 == 0)
	{
		long long S;
		S = (n + 2) * n / 4 - n * n / 4;
		cout << S; 
	}
	else
	{
		long long S = ((n - 3) / 2 + 1) * (n + 1) / 2 - ((n - 1) / 2 + 1) * (n + 1) / 2;
		cout << S;
	}
}
