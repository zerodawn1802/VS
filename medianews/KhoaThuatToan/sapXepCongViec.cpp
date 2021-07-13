/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
struct data
{
	int s, f;
};
bool cmp(data a, data b)
{
	return a.f < b.f;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		data a[1005];
		for(int i = 0; i < n; i++) cin >> a[i].s;
		for(int i = 0; i < n; i++) cin >> a[i].f;
		sort(a, a + n, cmp);
		int dem = 1, k = 0;
		for(int i = 1; i < n; i++)
		{
			if(a[i].s >= a[k].f)
			{
				dem++;
				k = i;
			}
		}
		cout << dem << endl;
	}
}

