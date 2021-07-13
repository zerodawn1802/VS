#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = 0;
	for(int i = n; i != 0; i /= 10)
	{
		int a = i % 10;
		k += a;
	}
	if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		cout << 3597 + k * 366;
	}
	else cout << 3584 + k * 365;
}

