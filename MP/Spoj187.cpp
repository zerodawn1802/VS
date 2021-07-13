#include <bits/stdc++.h>
using namespace std;
typedef struct team
{
	string ten;
	int goal;
};
int main()
{
	int n;
	cin >> n;
	team doi[3];
	for(int i = 1; i <= 2; i++)
	{
		doi[i].ten = "";
		doi[i].goal = 0;
	}
	string str;
	for(int i = 1; i <= n; i++)
	{
		cin >> str;
		if(i == 1)
		{
			doi[1].ten = str;
			doi[1].goal++;
		}
		else
		{
			if(str == doi[1].ten) doi[1].goal++;
			else
			{
				doi[2].ten = str;
				doi[2].goal++;
			}
		}
	}
	if(doi[1].goal > doi[2].goal) cout << doi[1].ten;
	else cout << doi[2].ten;
}
