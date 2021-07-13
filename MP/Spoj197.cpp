#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int y, k, n;
	cin >> y >> k >> n;
	int a = n / k;
	if(y >= a *k) cout << "-1" ;
	else
	{
		for(int i = 1; i <= a; i++)
		{
			if(i * k > y) cout << i * k - y << " ";
		}
	}
}
