/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n + 5];
		long long dp[k + 5] = {0};
		dp[0] = 1;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 1; i <= k; i++)
		{
			for(int j = 0; j < n; j++) if(i >= a[j]) dp[i] = (dp[i] + dp[i - a[j]]) % mod;
		}
		cout << dp[k] << endl;
	}
}

