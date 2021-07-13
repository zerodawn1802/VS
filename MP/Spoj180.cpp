#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a(6);
	int dd[10] = {0};
	for(int i = 0; i < 6; i++)
	{
		cin >> a[i];
		dd[a[i]]++;
	}
	int dd2[10] = {0};
	for(int i = 1; i <= 9; i++)
	{
		if(dd[i] != 0) dd2[dd[i]]++;
	}
	if(dd2[4] == 1 && dd2[2] == 1 || dd2[6] == 1) cout << "Elephant";
	else if(dd2[4] == 1 || dd2[5] == 1) cout << "Bear";
	else cout << "Alien";
}
