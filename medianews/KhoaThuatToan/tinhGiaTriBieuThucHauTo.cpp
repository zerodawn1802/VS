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
		stack<long long> st;
		int len = s.size();
		for(int i = 0; i < len; i++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
			{
				long long a = st.top(); st.pop();
				long long b = st.top(); st.pop();
				long long tmp;
				if(s[i] == '+') tmp = b + a;
				else if(s[i] == '-') tmp = b - a;
				else if(s[i] == '*') tmp = b * a;
				else if(s[i] == '/') tmp = b / a;
				else if(s[i] == '%') tmp = b % a;
				else
				{
					tmp = b;
					for(int j = 0; j < a - 1; j++) tmp *= b;
				}
				st.push(tmp);
			}
			else st.push((long long)(s[i] - '0'));
		}
		cout << st.top() << endl;
	}
}

