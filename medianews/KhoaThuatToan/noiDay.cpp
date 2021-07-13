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
		long long val;
		priority_queue<long long, vector<long long>, greater<long long> > a;
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> val;
			a.push(val);
		}
		long long res = 0;
		while(a.size() > 1)
		{
			long long x = a.top();
			a.pop();
			long long y = a.top();
			a.pop();
			a.push(x + y);
			res += x + y;
		}
		cout << res << endl;
	}
}

