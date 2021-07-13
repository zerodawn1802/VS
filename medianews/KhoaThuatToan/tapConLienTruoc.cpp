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
		int a[k], kt = 0;
		for(int i = 0; i < k; i++)
		{
			cin >> a[i];
			if(a[i] != i + 1) kt = 1;
		}
		if(kt == 0)
		{
			for(int i = 0; i < k; i++)
			{
				a[i] = n - k + i + 1;
			}
		}
		else
		{
			int l = 0;
			while(a[l] == n - k + l) l++;
			a[l]--;
		}
		for(int i = 0; i < k; i++) cout << a[i] << " ";
		cout << endl;
	}
}

