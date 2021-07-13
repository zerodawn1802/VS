#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int vt1, vt2;
	long long s = 0, stmp = 0, vt1tmp = 1;
	for(int i = 0; i < n; i++)
	{
		long long a;
		cin >> a;
		stmp += a;
		if(stmp < 0)
		{
			stmp = 0;
			vt1tmp = i + 2;
		}
		else if(stmp > s)
		{
			s = stmp;
			vt1 = vt1tmp;
			vt2 = i + 1;
		}
	}
	cout << vt1 << " " << vt2 << " " << s;
}
