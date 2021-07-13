/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
const long long key = 1e9 + 7;
int k = 2;
int res(int a, int b, int c)
{
	a = b + a;
	if(a > key) a = a % key;
	if(k == c)
	{
		k = 2;
		return a;
	}
	else k++;
	b = a + b;
	if(b > key) b = b % key;
	if(k == c)
	{
		k = 2;
		return b;
	}
	else
	{
		k++;
		res(a, b, c);
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int c;
		cin >> c;
		if(c == 0) cout << "0" << endl;
		else if(c == 1) cout << "1" << endl;
		else cout << res(0, 1, c) << endl;
	}
}

