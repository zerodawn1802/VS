/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
long long boiChung(long long a, long long b)
{
	long long m = a, n = b;
	while(m != n)
	{
		if(m > n) m -= n;
		else n -= m;
	}
	return a * b / m;
}
int main()
{
	long long n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	long long l, r, z;
	cin >> l >> r;
	vector<long long> b;
	for(int i = 1; i < n; i++)
	{
		long long k = boiChung(a[i], a[i - 1]);
		b.push_back(k);
	}
	if(n == 3)
	{
		long long k = boiChung(a[0], a[n - 1]);
		b.push_back(k);
		z = boiChung(k, a[1]);
	}
	long long tongUoc = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] <= r)
		{
			long long uoc1, uoc2;
			uoc1 = r / a[i];
			if(l % a[i] == 0)
			{
				uoc2 = l / a[i];
			}
			else uoc2 = l / a[i] + 1;
			tongUoc = tongUoc + uoc1 - uoc2 + 1;
		}
	}
	for(int i = 0; i < b.size(); i++)
	{
		if(b[i] <= r)
		{
			long long uoc1, uoc2;
			uoc1 = r / b[i];
			if(l % b[i] == 0)
			{
				uoc2 = l / b[i];
			}
			else uoc2 = l / b[i] + 1;
			tongUoc = tongUoc - (uoc1 - uoc2 + 1);
		}
	}
	if(n == 3)
	{
		if(z <= r)
		{
			long long uoc1, uoc2;
			uoc1 = r / z;
			if(l % z == 0) uoc2 = l / z;
			else uoc2 = l / z + 1;
			tongUoc = tongUoc + (uoc1 - uoc2 + 1);
		}
	}
	cout << tongUoc;
}

