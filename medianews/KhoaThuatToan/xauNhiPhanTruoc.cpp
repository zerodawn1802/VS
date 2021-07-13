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
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		int l = str.size();
		int n[l];
		int key;
		for(int i = 0; i < str.size(); i++)
		{
			n[i] = (int)(str[i] - '0');
		}
		for(int i = l - 1; i >= 0; i--)
		{
			if(n[i] == 1)
			{
				n[i] = 0;
				key = i;
				break;
			}
		}
		for(int i = key + 1; i < l; i++) n[i] = 1;
		for(int i = 0; i < l; i++) cout << n[i];
		cout << endl;
	} 
}

