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
		string s;
		cin >> s;
		if(s[0] == '0')
		{
			cout << 0 << endl;
			continue;
		}
		int n = s.size();
		int dp[n + 1];
		dp[0] = dp[1] = 1;
		for(int i = 2; i <= n; i++)
		{
			dp[i] = 0;
			if(s[i - 1] > '0') dp[i] = dp[i - 1];
			if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] < '7')) dp[i] += dp[i - 2];
		}
		cout << dp[n] << endl;
	}
}

