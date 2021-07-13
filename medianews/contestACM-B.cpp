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
	int a[n];
	int so1 = 0, so0 = 0, key1 = 1, key0 = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i] != key1) so1++;
		if(a[i] != key0) so0++;
		if(key1 == 1) key1--;
		else key1++;
		if(key0 == 1) key0--;
		else key0++;
	}
	cout << min(so1, so0);
}

