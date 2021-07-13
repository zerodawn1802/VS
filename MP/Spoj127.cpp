#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	cin.ignore();
	while(str != "#")
	{
		int y = 0, n = 0, a = 0, tong;
		if(str.size() % 2 != 0) tong = str.size() + 1;
		else tong = str.size();
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] == 'Y') y++;
			else if(str[i] == 'N') n++;
			else if(str[i] == 'A') a++;
		}
		if(a >= tong / 2) cout << "need quorum" << endl;
		else
		{
			if(y > n) cout << "yes" << endl;
			else if(y < n) cout << "no" << endl;
			else if(y == n) cout << "tie" << endl;
		}
		cin >> str;
		cin.ignore();
	}
}
