/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
float ps(float x, int k)
{
	float ts = 1;
	for(int i = 1; i <= k; i++)
	{
		ts *= x;
	}
	int ms = 1;
	for(int i = 1; i <= k; i++)
	{
		ms *= i;
	}
	return ts / (float)ms;
}
using namespace std;
int main()
{
	int n;
	float x;
	cin >> n >> x;
	float res = 1;
	for(int i = 1; i <= n; i++)
	{
		res += ps(x, i);
	}
	printf("%.4f", res);
}

