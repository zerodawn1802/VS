#include <bits/stdc++.h>
using namespace std;
int main ()
{
	long long v[] = {4, 16, 121, 529, 4096, 17956, 139129, 609961, 4726276, 20720704, 160554241, 703893961}; //|| ^^ ||
	long long a, b;
	int t = 0;
	while(1)
	{
		cin >> a >> b;
		if(a == 0 && b == 0) break;
		t++;
		long long k = 0;
		for(int i = 0; i < 12; i++)
		{
			if(v[i] > a && v[i] < b) k++;
		}
		cout << "Case " << t << ": " << k << endl;
	}
	return 0;
}
