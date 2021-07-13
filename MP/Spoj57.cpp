#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;
	for(int i = 0; i < n; i++)
	{
		if(s1[i] == 'B' && s2[i] == 'B') cout << "G";
		if(s1[i] == 'K' && s2[i] == 'K') cout << "B";
		if(s1[i] == 'G' && s2[i] == 'G') cout << "K";
		if(s1[i] == 'B' && s2[i] == 'K' || s1[i] == 'K' && s2[i] == 'B') cout << "B";
		if(s1[i] == 'K' && s2[i] == 'G' || s1[i] == 'G' && s2[i] == 'K') cout << "K";
		if(s1[i] == 'B' && s2[i] == 'G' || s1[i] == 'G' && s2[i] == 'B') cout << "G";
	}
}

