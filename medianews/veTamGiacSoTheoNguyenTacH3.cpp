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
				if(i + j < n - 1) cout << "~"; 
				else cout << 2 * (i + j + 2 - n);
			}
			else
			{
				if(j - i > n - 1) cout << " ";
				else cout << 2 * (n + i - j);
			}
		}
		cout << endl;
	}
}

