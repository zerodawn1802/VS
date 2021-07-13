#include <bits/stdc++.h>
using namespace std;
int dd[3003];
void snt()
{
	for(int i = 0; i < 3003; i++)
	{
		dd[i] = 1;
	}
	dd[0] = dd[1] = 0;
	for(int i = 2; i < 3003; i++)
	{
		if(dd[i] == 0) continue;
		for(int j = 2 * i; j < 3003; j += i)
		{
			dd[j] = 0;
		}
	}
}
int main()
{
	snt();
	int n;
	cin >> n;
	int dem = 0;
	for(int i = 6; i <= n; i++)
	{
		int tmp = 0;
		for(int j = 2; j <= i; j++)
		{
			if(i % j == 0 && dd[j] == 1) tmp++;
		}
		if(tmp == 2) dem++;
	}
	cout << dem;
}
