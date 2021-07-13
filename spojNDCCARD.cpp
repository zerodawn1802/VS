/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, dem = 0;
	cin >> n >> m;
	int a[n], dd[n] = {0}, res = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		dd[a[i]] = 0;
	}
	sort(a, a + n);
	for(int i = n - 1; i >= 2; i--)
	{
		if(a[i] >= m) continue;
		int tmp = 0;
		for(int j = i - 1; j >= 0; j--)
		{
			if(j <= tmp) break;
			if(a[j] + a[tmp] + a[i] > m) continue;
			while(tmp + 1 < j && a[tmp + 1] + a[i] + a[j] <= m) tmp++;
			res = max(res, a[tmp] + a[i] + a[j]);
		}
	}
	cout << res;
}

