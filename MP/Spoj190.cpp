#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int SumD = 0, SumA = -100005, a, tmp = 0, dd = 0, da = 0, S = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a;
		tmp += a;
		if(tmp < 0) tmp = 0;
		else S = max(S, tmp);
		if(a >= 0)
		{
			SumD += a;
			dd = 1;
		}
		else if(a > SumA) 
		{
			SumA = a;
			da = 1;
		}
	}
	if(dd == 0) cout << SumA << " "<< SumA;
	else if(da == 0) cout << SumD << " " << SumD;
	else cout << S << " " << SumD;
	return 0;
}
