#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int tg;
	if(a > b)
	{
		tg = a;
		a = b;
		b = tg;
	}
	if(b > c)
	{
		tg = b;
		b = c;
		c = tg;
	}
	if(b - a == c - b) cout << c + c - b;
	if(c - b < b - a) cout << (b + a) / 2;
	if(c - b > b - a) cout << (b + c) / 2;
	return 0;
}
