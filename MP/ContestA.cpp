#include <bits/stdc++.h>
using namespace std;
long long dd[1000006] = {0};
void timuocle()
{
	for(int i = 1; i <= 1000006; i++)
	{
		dd[i] = 1;
	}
	for(int i = 2; i <= 1000006; i++)
	{
		if(i % 2 == 1)
		{
			dd[i] += i;
			for(int j = 2 * i; j <= 1000006; j += i)
			{
				dd[j] += i;
			}
		}
	}
}
int main()
{
	long long a, b;
	cin >> a >> b;
	timuocle();
	long long kq = 0;
	for(int i = a; i <= b; i++)
	{
		kq += dd[i];
	}
	cout << kq;
}
