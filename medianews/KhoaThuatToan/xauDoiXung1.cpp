/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
bool dp[1003][1003];
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
		int res = 1;
		for(int i = 0; i < s.size(); i++)
		{
			int m = i, n = i;
			while(m >= 0 && n < s.size())
			{
				if(s[m] == s[n])
				{
					res = max(res, n - m + 1);
					m--; n++;
				}
				else break;
			}
		}
		for(int i = 0; i < s.size(); i++)
		{
			int m = i, n = i + 1;
			while(m >= 0 && n < s.size())
			{
				if(s[m] == s[n])
				{
					res = max(res, n - m + 1);
					m--; n++;
				}
				else break;
			}
		}
		cout << s.size() - res << endl;
	}
}

