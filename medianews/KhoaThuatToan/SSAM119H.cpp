/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		int n = str.size();
		int k = 0, p = 0;
		if(n >= 2)
		{
			k = (int)(str[n - 2] - '0');
			p = (int)(str[n - 1] - '0');
		}
		else p = (int)(str[n - 1] - '0');
		int l = k * 10 + p;
		int a = l % 4, b = l % 2;
		int res = 0, res1, res2;
		if(a == 0) res1 = 2;
		else if(a == 1) res1 = 0;
		else if(a == 2) res1 = 3;
		else res1 = 0;
		if(b == 0) res2 = 1;
		else if(b == 1) res2 = 4;
		res = res1 + res2 + 1;
		cout << res % 5 << endl;
	}
}

