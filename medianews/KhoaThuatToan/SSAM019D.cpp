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
	vector<long long> a;
	a.push_back(9);
	int c = 1, d = 1, p = 0;
	while(c < 18)
	{
		int dem = 0;
		for(int i = p; i < d; i++)
		{
			long long k = a[i] * 10;
			a.push_back(k);
			dem++;
			k += 9;
			a.push_back(k);
			dem++;
		}
		p = d;
		d += dem;
		c++;
	}
	while(t--)
	{
		int n;
		cin >> n;
		for(int i = 0; i < a.size(); i++)
		{
			if(a[i] % n == 0)
			{
				cout << a[i] << endl;
				break;
			}
		}
	}
}

