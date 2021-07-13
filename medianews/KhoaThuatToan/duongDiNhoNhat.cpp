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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n + 5][m + 5], dp[n + 5][m + 5];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++) cin >> a[i][j];
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				if(i == 1 && j == 1) dp[i][j] = a[i][j];
				else if(i == 1) dp[i][j] = a[i][j] + dp[i][j - 1];
				else if(j == 1) dp[i][j] = a[i][j] + dp[i - 1][j];
				else dp[i][j] = a[i][j] + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
			}
		}
		cout << dp[n][m] << endl;
	}
}

