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
		int n;
		cin >> n;
		long long dp[n + 5];
		for(int i = 0; i < n; i++) dp[i] = i;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= sqrt(i); j++) dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
		cout << dp[n] << endl;
	}
}

