#include <bits/stdc++.h>
using namespace std;
char cell[10][10];
int r[]={1, 1, 1, 4, 4, 4, 7, 7, 7};
int c[]={1, 4, 7, 1, 4, 7, 1, 4, 7};
struct sdk
{
	int x, y;
};
bool tf()
{
	for(int i = 1; i <= 9; i++)
	{
		int d[10];
		for(int j = 1; j <= 9; j++) d[j] = 0;
		for(int j = 1; j <= 9; j++) d[cell[i][j] - '0']++;
		for(int j = 1; j <= 9; j++) if(d[j] == 0) return false;
	}
	for(int j = 1; j <= 9; j++)
	{
		int d[10];
		for(int i = 1; i <= 9; i++) d[i] = 0;
		for(int i = 1; i <= 9; i++) d[cell[i][j] - '0']++;
		for(int i = 1; i <= 9; i++) if(d[i] == 0) return false;
	}
	for(int k = 0; k <= 8; k++)
	{
		int d[10];
		for(int i = 1; i <= 9; i++) d[i] = 0;
		for(int i = r[k]; i <= r[k]+2; i++)
		{
			for(int j = c[k]; j <= c[k]+2; j++) d[cell[i][j] - '0']++;
		}
		for(int i = 1; i <= 9; i++) if(d[i] == 0) return false;
	}
	return true;
}
void process()
{
	vector<sdk> a;
	for(int i = 1; i <= 9; i++)
	{
		for(int j = 1; j <= 9; j++)
		{
			cin >> cell[i][j];
			if(cell[i][j] == '0')
			{
				sdk tmp;
				tmp.x = i;
				tmp.y = j;
				a.push_back(tmp);
			}
		}
	}
	int check = 0;
	for(char i1 = '1'; i1 <= '9'; i1++)
	{
		for(char i2 = '1'; i2 <= '9'; i2++)
		{
			for(char i3 = '1'; i3 <= '9'; i3++)
			{
				for(char i4 = '1'; i4 <= '9'; i4++)
				{
					for(char i5 = '1'; i5 <= '9'; i5++)
					{
						cell[a[0].x][a[0].y] = i1;
						cell[a[1].x][a[1].y] = i2;
						cell[a[2].x][a[2].y] = i3;
						cell[a[3].x][a[3].y] = i4;
						cell[a[4].x][a[4].y] = i5;
						if(tf())
						{
							check = 1;
							for(int i = 1; i <= 9; i++)
							{
								for(int j = 1; j <= 9; j++)
								{
									cout << cell[i][j];
								}
								cout << endl;
							}
							return;
						}
					}
				}
			}
		}
	}
	if(check == 0) cout << "Could not complete this grid." << endl;
}
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		process();
		cout << endl;
	}
}
