#include <bits/stdc++.h>
using namespace std;
string str[21];
int r, c, doc[21][21], ngang[21][21];
string goc = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
int timdoc(int x, int y)
{
	doc[x][y] = 0;
	string tmp = "";
	while((x < r) && str[x][y] != '#')
	{
		tmp += str[x][y];
		doc[x][y] = 0;
		x++;
	}
	if(tmp.size() < 2) return 0;
	if(tmp < goc) goc = tmp;
}
int timngang(int x, int y)
{
	ngang[x][y] = 0;
	string tmp = "";
	while((y < c) && (str[x][y] != '#'))
	{
		tmp += str[x][y];
		ngang[x][y] = 0;
		y++;
	}	
	if(tmp.size() < 2) return 0;
	if(tmp < goc) goc = tmp;
}
int main()
{
	cin >> r >> c;
	for(int i = 0; i < r; i++)
	{
		cin >> str[i];
	}
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			doc[i][j] = 1;
			ngang[i][j] = 1;
		}
	}
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			if(doc[i][j]) timdoc(i, j);
			if(ngang[i][j]) timngang(i, j);
		}
	}
	cout << goc;
}
