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
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 2 * n - 1; j++)
		{
			if(j < n)
			{
				if(i >= j) cout << n - j;
				else cout << n - i;
			}
			else
			{
				if(i + j < 2 * n - 1) cout << n - i;
				else cout << j - n + 2;
			}
		}
		cout << endl;
	}
	for(int i = n; i < 2 * n - 1; i++)
	{
		for(int j = 0; j < 2 * n - 1; j++)
		{
			if(j < n)
			{
				if(i + j < 2 * n - 1) cout << n - j;
				else cout << i - n + 2;
			}
			else
			{
				if(i > j) cout << i - n + 2;
				else cout << j - n + 2;
			}
		}
		cout << endl;
	}
}

