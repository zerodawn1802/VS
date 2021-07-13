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
	int a, b;
	cin >> a >> b;
	int s[a + 1][b + 1];
	for(int i = 1; i <= a; i++)
	{
		for(int j = 1; j <= b; j++)
		{
			if(i - j >= a - b) s[i][j] = a - i + j;
			else s[i][j] = b;
		}
	}
	for(int i = 1; i <= a; i++)
	{
		for(int j = 1; j <= b; j++) cout << s[i][j];
		cout << endl;
	}
}

