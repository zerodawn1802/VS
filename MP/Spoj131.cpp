#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l, r, maxl, maxr;
	l = r = maxr = maxl = 0;
	string str;
	cin >> str;
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == 'L')
		{
			l++;
			r--;
		}
		if(str[i] == 'R')
		{
			r++;
			l--;
		}
		if(str[i] == '?')
		{
			l++;
			r++;
		}
		if(l > maxl) maxl = l;
		if(r > maxr) maxr = r;
	}
	if(maxl > maxr) cout << maxl;
	else cout << maxr;
	return 0;
}
