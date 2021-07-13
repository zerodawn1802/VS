#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s[4];
	int a, b, c = 0;
	for(int i = 0; i < 4; i++) cin >> s[i];
	for(long i = 0; i < 3; i++)
	{
		if(c == 1) break;
		else
		{
			for(int j = 0; j < 3; j++)
			{
				a = 0;
				b = 0;
				for(int k = i; k <= i + 1; k++)
				{
					for(int l = j; l <= j + 1; l++)
					{
						if(s[k][l] == '#') b++;
						else a++;
					}
				}
				if(a * b == 3 || a * b == 0) 
				{
					c = 1;
					break;
				}
			}
		}
	}
	if(c != 0) cout << "YES";
	else cout << "NO";
}
