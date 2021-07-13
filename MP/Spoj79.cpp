#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		long long n;
		cin >> n;
		if(n % 100 == 86)
		{
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
}

