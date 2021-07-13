/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
long long UC(long long a, long long b)
{
	while(a != b)
	{
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
		long long k = x * y / UC(x, y);
		long long r = k * z / UC(k, z);
		long long dem = 0;
		long long s = 1, res;
		for(int i = 1; i < n; i++) s *= 10;
		if(s % r != 0) res = (s / r + 1) * r;
		else res = s;
		long long l = res;
		while(l != 0)
		{
			dem++;
			l /= 10;
		}
		if(dem <= n) cout << res << endl;
		else cout << -1 << endl;
	}
}

