/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int value, int l, int r)
{
	int res = -1;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(a[mid] <= value)
		{
			res = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return res;
}
int main()
{
	int m, n;
	cin >> m >> n;
	int a[m], b[n];
	for(int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	sort(a, a + m);
	for(int i = 0; i < n; i++)
	{
		if(b[i] < a[0])
		{
			cout << "0" << endl;
		}
		else
		{
			cout << binarySearch(a, b[i], 0, m - 1) + 1 << endl;
		}
	}
}
