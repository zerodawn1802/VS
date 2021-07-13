/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	for(int i = s.size() - 1; i >= 0; i--)
	{
		if(s[i] != ' ') cout << s[i] << " ";
	}
}
