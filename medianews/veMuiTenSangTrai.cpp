/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int nga = n - 1, sao = n;
	while(nga >= 0)
	{
		for(int i = 0; i < nga; i++) cout << "~";
		for(int i = 0; i < sao; i++) cout << "*";
		nga--;
		sao--;
		cout << endl;
	}
	nga += 2;
	sao += 2;
	while(nga <= n - 1)
	{
		for(int i = 0; i < nga; i++) cout << "~";
		for(int i = 0; i < sao; i++) cout << "*";
		nga++;
		sao++;
		cout << endl;
	}
}

