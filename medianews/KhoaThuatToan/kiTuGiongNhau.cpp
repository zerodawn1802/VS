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
		int n, ins, r, c;
		cin >> n >> ins >> r >> c;
		int dp[n + 5] = {0};
		dp[0] = 0;
		dp[1] = ins;
		for(int i = 2; i <= n; i++)
		{
			if(i & 1) dp[i] = min(dp[i - 1] + ins, dp[(i + 1) / 2] + c + r);
			else dp[i] = min(dp[i - 1] + ins, dp[i / 2] + c);
		}
		cout << dp[n] << endl;
	}
}

