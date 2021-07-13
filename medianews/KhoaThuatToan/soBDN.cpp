/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
string process(int n)
{
	queue<string> q;
	q.push("1");
	while(q.size() > 0)
	{
		string res = q.front();
		q.pop();
		long long tmp = 0;
		for(int i = 0; i < res.size(); i++)
		{
			tmp = 10 * tmp + (int)(res[i] - '0');
			tmp %= n;
		}
		if(tmp == 0) return res;
		q.push(res + "0");
		q.push(res + "1");
	}
}
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
		cout << process(n) << endl;
	}
}

