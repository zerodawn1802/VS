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
	string str;
	getline(cin, str);
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] != ' ' && str[i] != '\t') cout << str[i];
	}
}

