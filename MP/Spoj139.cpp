#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a[100005], s[100005], q = '9';
	int d[100];
	cin >> a >> s;
	for(char i = '0'; i <= '9'; i++) d[i] = 0;
	for(char *q = s; *q; q++) d[*q]++;
	for(char *p = a; *p; p++)
	{
		while(q > '0' && d[q] == 0) q--;
		if(q == '0') break;
		if(*p < q)
		{
			*p = q;
			d[q]--;
		}
	}
	cout << a;
}
