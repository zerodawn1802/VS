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
	long long n, k;
	cin >> n >> k;
	long long a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	vector<long long> b;
	long long l = n / 2;
	for(int i = l; i < n - 1; i++)
	{
		long long z = a[i + 1] - a[i];
		b.push_back(z);
	}
	long long res = a[l], c = 0, m = b.size() + 1;
	while(k > 0 && c < m)
	{
		if(k >= b[c] * (c + 1))
		{
			res += b[c];
			k = k - b[c] * (c + 1);
			c++;
		}
		else
		{
			res = res + k / (c + 1);
			break;
		}
	}
	if(c == m) res = res + k / (n - l);
	cout << res;
}

