#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int vt = -1;
		for(int i = s.length() - 1; i >= -1; i--)
		{
			if (s[i] == '1') 
			{
				vt = i;
				break;
			}
		}
		if (vt != -1) 
		{
			s[vt] = '0';
			for(int i = vt + 1; i < s.length(); i++) s[i] = '1';
			cout << s;
		}
		else
			for(int i = 0; i < s.length(); i++) cout << '1';
		cout << endl;
	}
	return 0;
}