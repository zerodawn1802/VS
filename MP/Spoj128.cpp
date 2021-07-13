#include <bits/stdc++.h>
using namespace std;
int n;
char dc[31][31];
char tg[4];
int gioihan(int i, int j)
{
	if (i < 1 || n < i) return 1;
	if (j < 1 || n < j) return 1;
	return 0;
}
int check(char dk)
{
	for(int i = 1; i <= 3; i++)
	{
		if(tg[1] == tg[2] && tg[2] == tg[3] && tg[3] == dk) return 1;
	}
	return 0;
}
int anngang(int i, int j, char dk)
{
	int it = i;
	int jt = j + 2;
	if(gioihan(it, jt) == 1) return 0;
	else
	{
		tg[1] = dc[i][j];
		tg[2] = dc[i][j + 1];
		tg[3] = dc[i][j + 2];
		if(check(dk) == 1) return 1;
	}
	return 0;
}
int andoc(int i, int j, char dk)
{
	int it = i + 2;
	int jt = j;
	if(gioihan(it, jt) == 1) return 0;
	else
	{
		tg[1] = dc[i][j];
		tg[2] = dc[i + 1][j];
		tg[3] = dc[i + 2][j];
		if(check(dk) == 1) return 1;
	}
	return 0;
}
int ancheotrai(int i, int j, char dk)
{
	int it = i + 2;
	int jt = j + 2;
	if(gioihan(it, jt) == 1) return 0;
	else
	{
		tg[1] = dc[i][j];
		tg[2] = dc[i + 1][j + 1];
		tg[3] = dc[i + 2][j + 2];
		if(check(dk) == 1) return 1;
	}
	return 0;
}
int ancheophai(int i, int j, char dk)
{
	int it = i + 2;
	int jt = j - 2;
	if(gioihan(it, jt) == 1) return 0;
	else
	{
		tg[1] = dc[i][j];
		tg[2] = dc[i + 1][j - 1];
		tg[3] = dc[i + 2][j - 2];
		if(check(dk)==1) return 1;
	}
	return 0;
}
int main()
{
	cin >> n;
	string str;
	for(int i = 1; i <= n; i++)
	{
		cin >> str;
		for(int j = 1; j <= n; j++)
		{
			dc[i][j] = str[j - 1];
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(dc[i][j] != '.')
			{
				char hh = dc[i][j];
				if(anngang(i, j, hh) != 0 || andoc(i, j, hh) != 0 || ancheotrai(i, j, hh) != 0 || ancheophai(i, j, hh) != 0)
				{
					cout << hh;
					return 0;
				}
			}
		}
	}
	cout << "ongoing";
	return 0;
}
