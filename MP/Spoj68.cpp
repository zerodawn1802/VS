#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r, c, dd[18][18];
	cin >> r >> c;
	char ch[18][18];
	for(int i=1; i<=r; i++)
	{
		for(int j = 1; j <= c; j++)
		{
			cin >> ch[i][j];
			if(ch[i][j] == 'S') dd[i][j] = -1;
			else dd[i][j]=0;
		}
	}
	for(int i = 1; i <= r; i++)
	{
		int kt = 1;
		for(int j = 1; j <= c; j++)
		{
			if(dd[i][j] == -1)
			{
				kt = 0;
				break;
			}
		}
		if(kt == 1) 
		{
			for(int j = 1; j <= c; j++) dd[i][j] = 1;
		}
	}
	for(int j = 1; j <= c; j++)
	{
		int kt = 1;
		for(int i = 1; i <= r; i++)
		{
			if(dd[i][j] == -1)
			{
				kt = 0;
				break;
			}
		}
		if(kt == 1)
		{
			for(int i = 1; i <= r; i++) dd[i][j] = 1;
		}
	}
	int dem = 0;
	for(int i = 1; i <= r; i++)
	{
		for(int j = 1; j <= c; j++)
		{
			if(dd[i][j] == 1) dem++;
		}
	}
	cout << dem;
	return 0;
}
