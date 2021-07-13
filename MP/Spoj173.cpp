#include <bits/stdc++.h>
using namespace std;
string str;
int main()
{
	cin >> str;
	while(str != "end")
	{
		int s = 0;
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				s += int(str[i]) - 61;
			}
			else if(str[i] >= 'A' && str[i] <= 'Z')
			{
				s += int(str[i]) - 55;
			}
			else if(str[i] >= '0' && str[i] <= '9')
			{
				s += int(str[i]) - 48;
			}
		}
		if(s % 61 == 0) cout << "yes" << endl;
		else cout << "no" << endl;
		cin >> str;
	}
}
