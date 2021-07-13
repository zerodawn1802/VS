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
		int key = -1;
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = n - 2; i >= 0; i--)
		{
			if(a[i] < a[i + 1]) 
			{
				key = i;
				break;
			}
		}
		if(key == -1) for(int i = 0; i < n; i++) cout << a[i] << " ";
		else
		{
			for(int i = n - 1; i >= 0; i--)
			{
				if(a[i] > a[key])
				{
					swap(a[i], a[key]);
					break;
				}
			}
			sort(a + key + 1, a + n);
			for(int i = 0; i < n; i++)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}

