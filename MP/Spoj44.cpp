#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++)
	{
		int c = 0;
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0) c++;
		}
		if(c == 0 && i != 1) cout << i << endl;
	}
}
