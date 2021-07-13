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
	int a = 0, c = 0;
};
int dp[1003][1003];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n, v;
		cin >> n >> v;
		data t[n + 5];
		for(int i = 1; i <= n; i++) cin >> t[i].a;
		for(int i = 1; i <= n; i++) cin >> t[i].c;
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= v; j++)
			{
				if(j >= t[i].a) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - t[i].a] + t[i].c);
				else dp[i][j] = dp[i - 1][j];
			}
		}
		cout << dp[n][v] << endl;
	}
}

