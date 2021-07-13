#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int m = str1.size(), n = str2.size(), dc1 = -1, dc2 = -1;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(str1[i] == str2[j])
			{
				dc1 = i;
				dc2 = j;
				break;
			}
		}
		if(dc1 != -1 && dc2 != -1) break;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(j == dc1) cout << str2[i];
			else if(i == dc2) cout << str1[j];
			else cout << ".";
		}
		cout << endl;
	}
}
