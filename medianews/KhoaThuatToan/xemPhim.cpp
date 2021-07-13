/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int dp[101][25001];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int w, n;
	cin >> w >> n;
	int a[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= w; j++)
		{
			if(j >= a[i]) dp[i][j] = max(dp[i - 1][j] , dp[i - 1][j - a[i]] + a[i]);
			else dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[n][w] << endl;
}

