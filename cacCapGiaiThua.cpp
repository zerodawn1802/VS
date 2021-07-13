/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int n, t, mu[20], res[105], m, l;
string s;
void pus(int x)
{
	m++;
	res[m] = x;
}
void Tang(int n)
{
	if(n == 2) pus(2);
	if(n == 3) pus(3);
	if(n == 4)
	{
		pus(3);
		pus(2);
		pus(2);
	}
	if((n == 5) || (n == 7)) pus(n);
	if(n == 6)
	{
		pus(5);
		pus(3);
	}
	if(n == 8)
	{
		pus(7);
		pus(2);
		pus(2);
		pus(2);
	}
	if(n == 9)
	{
		pus(7);
		pus(3);
		pus(3);
		pus(2);
	}
}
void Process()
{
	m = 0;
	for(int i = 0; i < n; i++)
	{
		if((s[i] == '0') || (s[i] == '1')) continue;
		Tang(s[i] - 48);
	}
	sort(res + 1, res + 1 + m);
}
int main()
{
	cin >> t;
	while(t--)
	{
		cin >> n >> s;
		Process();
		for(int i = m; i > 0; i--) cout << res[i];
		cout << endl;
	}
}
