#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while(cin >> str)
	{
		int kt = 0;
    	int dd[26] = {0};
    	for(int i = 0; i < str.size(); i++)
		{
    		dd[str[i] - 'a']++;
    	}
    	for(int i = 0; i < 26; i++)
		{
    		if(dd[i] % 2 == 1) kt++;
    	}
    	if(kt < 2 || kt % 2 == 1) cout << "First\n";
    	else cout << "Second\n";
	}
	return 0;
}
