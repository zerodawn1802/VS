#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++)
	{
		string str;
		getline(cin, str);
		int dd['z' + 1] = {0}, gt = 0;
		string tmp = "";
		for (int i = 0; i < str.size(); i++)
		{
			if(str[i] == ' ') continue;
			if(str[i] < 97) str[i] = char(str[i] + 32);
			if(!dd[str[i]]) tmp += str[i];
			dd[str[i]]++;
		}
		for(int i = 'a'; i <= 'z'; i++)
		{
			if(dd[i] > 1) gt += dd[i];
		}
		cout << gt << " " << tmp << endl;
	}
}
