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
		stack<char> a;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == '(' || (s[i] == ')' && a.size() == 0)) a.push(s[i]);
			else if(s[i] == ')')
			{
				if(a.size() > 0 && a.top() == '(') a.pop();
				else a.push(s[i]);
			}
		}
		int d1 = 0, d2 = 0;
		while(a.size() > 0)
		{
			if(a.top() == '(') d1++;
			else d2++;
			a.pop();
		}
		int res = d1 / 2 + d2 / 2 + d1 % 2 + d2 % 2;
		cout << res << endl;
	}
}

