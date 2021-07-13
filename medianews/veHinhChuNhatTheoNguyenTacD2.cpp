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
	int m, n;
	cin >> m >> n;
	int a[m][n], max1, max2;
	if(m == n)
	{
		max1 = m;
		max2 = n - 2;
	}
	else
	{
		max1 = max(m, n);
		max2 = min(m, n);
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i + j < max1) a[i][j] = max1 - i - j;
			else a[i][j] = i + j - max2;
		}
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
}

