#include <bits/stdc++.h>
using namespace std;
int pt[101][101], ptm[101][101], thu[101], n;
void in()
{
	for(int i = 1; i <= n; i++)
	{
		thu[i] = 0;
	}
}
void process(int u)
{
	vector<int> p;
	p.push_back(u);
	thu[u] = 1;
	while(!p.empty())
	{
		int gt = p.front();
		p.pop_back();
		for(int i = 1; i <= n; i++)
		{
			if(ptm[gt][i] == 1 && thu[i] == 0)
			{
				thu[i]=1;
				p.push_back(i);
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	for(int k = 1; k <= t; k++)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> pt[i][j];
				ptm[i][j] = pt[i][j];
			}
		}
		int max = 0;
		in();
		for(int i = 1; i <= n; i++)
		{
			if(thu[i] == 0)
			{
				max++;
				process(i);
			}
		}
		int tg = 0, maxm = 0, dph = 0;
		for(int i = 1; i <= n; i++)
		{
			int dlt = i;
			for(int r = 1; r <= n; r++)
			{
				for(int c = 1; c <= n; c++)
				{
					if(r == dlt || c == dlt) ptm[r][c] = 0;
					else ptm[r][c] = pt[c][r];
				}
			}
			in();
			int s = 0;
			for(int j = 1; j <= n; j++)
			{
				if(thu[j] == 0 && j != dlt)
				{
					s++;
					process(j);
				}
			}
			if(s != max && s > maxm) 
			{
				dph = 1;
				maxm = s;
				tg = dlt;
			}
		}
		if(dph == 1) cout << tg << endl;
		else cout << "0" << endl;
	}
	return 0;
}
