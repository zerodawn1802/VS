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
	int a[n][n];
	int max = 0, k = 1, dd = 1, dong = 1;
	for(int i = 1; i <= n; i++) max += i;
	while(k <= max)
	{
		for(int i = 1; i <= dd; i++) a[dong][i] = k++;
		dong++;
		dd++;
		for(int i = dd; i >= 1; i--) a[dong][i] = k++;
		dong++;
		dd++;
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i >= j) cout << a[i][j] << " ";
			else cout << " ";
		}
		cout << endl;
	}
}

