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
	string res1, res2;
	int maxd = 0, mind = 100;
	string tmp = "";
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] != ' ' && i != str.size() - 1) tmp += str[i];
		else if(str[i] == ' ')
		{
			if(maxd < tmp.size())
			{
				maxd = tmp.size();
				res1 = tmp;
			}
			if(mind > tmp.size())
			{
				mind = tmp.size();
				res2 = tmp;
			}
			tmp = "";
		}
		else if(i == str.size() - 1)
		{
			tmp += str[i];
			if(maxd < tmp.size())
			{
				maxd = tmp.size();
				res1 = tmp;
			}
			if(mind > tmp.size())
			{
				mind = tmp.size();
				res2 = tmp;
			}
			tmp = "";
		}
	}
	cout << res1 << " " << res2;
}
