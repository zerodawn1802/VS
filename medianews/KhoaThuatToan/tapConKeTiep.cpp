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
		int n, k;
		cin >> n >> k;
		int a[k];
		for(int i = 1; i <= k; i++) cin >> a[i];
		int kt = 0;
		int l = k;
		while(a[l] == n - k + l) l--;
		if(l == 0) kt == 1;
		else a[l]++;
		int p = a[l];
		while(l <= k) a[l++] = p++;
		if(kt == 1) for(int i = 1; i <= k; i++) cout << i << " ";
		else for(int i = 1; i <= k; i++) cout << a[i] << " ";
		cout << endl;
	}
}

