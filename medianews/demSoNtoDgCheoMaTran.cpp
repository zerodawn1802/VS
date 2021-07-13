/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int dd[1000006];
void snt()
{
	for(int i = 0; i < 1000006; i++)
	{
		dd[i] = 1;
	}
	dd[0] = dd[1] = 0;
	for(int i = 2; i < 1000006; i++)
	{
		if(dd[i] == 0) continue;
		for(int j = i * 2; j < 1000006; j += i) dd[j] = 0;
	}
}
int main()
{
	snt();
	int n, dem = 0;
	cin >> n;
	int a[n + 1][n + 1];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i == j && dd[a[i][j]] == 1)
			{
				dem++;
			}
			else if(i + j - 1 == n && dd[a[i][j]] == 1)
			{
				dem++;
			}
		}
	}
	cout << dem;
	return 0;
}
