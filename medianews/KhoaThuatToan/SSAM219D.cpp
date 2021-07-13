/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int dd[10000007] = {0};
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			dd[a[i]] = 1;
		}
		for(int i = 0; i < n; i++) a[i] *= a[i];
		sort(a, a + n);
		int kt = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(i != j)
				{
					long long k = a[i] + a[j];
					float l = sqrt(k);
					if(l != (int)l)
					{
						kt == 2;
						break;
					}
					else if(dd[(int)l] == 1)
					{
						cout << "YES" << endl;
						kt = 1;
						break;
					}
				}
			}
			if(kt != 0) break;
		}
		if(kt == 0 || kt == 2) cout << "NO" << endl;
	}
}

