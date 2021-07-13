/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
string process(string s)
{
	stack<int> a;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '(') a.push(i);
		else if(s[i] == ')')
		{
			if(a.size() > 0)
			{
				int top = a.top();
				a.pop();
				if(top == 0) continue;
				else if(s[top - 1] == '+') continue;
				else if(s[top - 1] == '-')
				{
					for(int j = top; j <= i; j++)
					{
						if(s[j] == '+') s[j] = '-';
						else if(s[j] == '-') s[j] = '+';
					}
				}
			}
		}
	}
	string str = "";
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] != '(' && s[i] != ')') str += s[i];
	}
	return str;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		s1 = process(s1);
		s2 = process(s2);
		if(s1 == s2) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

