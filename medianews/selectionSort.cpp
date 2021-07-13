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
	for(int i = 0; i < n; i++) cin >> a[i];
	int i, j, index;
	for(i = 0; i < n - 1; i++)
	{
		index = i;
		for(j = i + 1; j < n; j++)
		{
			if(a[j] < a[index]) index = j;
		}
		if(index != i)
		{
			swap(a[index], a[i]);
		}
		for(int k = 0; k < n; k++) cout << a[k] << " ";
		cout << endl;
	}
}

