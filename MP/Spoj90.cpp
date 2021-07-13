#include <bits/stdc++.h>
using namespace std;
int main()
{
	int nu, nam, k;
	cin >> nu >> nam >> k;
	int doi;
	if(nu / 2 >= nam)
	{
		doi = nam;
	}
	else doi = nu / 2;
	if(nu - doi * 2 + nam - doi >= k) cout << doi;
	else
	{
		while(doi != 0 && nu - doi * 2 + nam - doi < k)
		{
			doi--;
		}
		cout << doi;
	}
}

