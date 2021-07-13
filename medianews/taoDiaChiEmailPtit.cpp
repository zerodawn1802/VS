/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	string tmp = "";
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 65 && str[i] <= 90) str[i] = str[i] - 'A' + 'a';
	}
	for(int i = str.size() - 1; i >= 0; i--)
	{
		if(str[i] != ' ')
		{
			tmp = str[i] + tmp;
		}
		else break;
	}
	cout << tmp;
	string tmp2 = "";
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] != ' ') tmp2 += str[i];
		else if(str[i] == ' ')
		{
			if(tmp2 != tmp && tmp2 != "") cout << tmp2[0];
			tmp2 = "";
		}
		if(i == str.size() - 1)
		{
			cout << "@ptit.edu.vn";
		}
	}
}
