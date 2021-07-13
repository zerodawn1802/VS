#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n;
		cin >> n;
		unsigned long long a = 1;
		for(int j = 1; j <= n; j++)
		{
			if(a % j != 0)
			{
				long long tmp;
				long long p = a, l = j;
    			while(l != 0)
				{
        			tmp = p % l;
        			p = l;
        			l = tmp;
    			}
    			a *= j / p;
			}
		}
		cout << a << endl;
	}
}
