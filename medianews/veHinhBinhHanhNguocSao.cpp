/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int m = 0, n = b;
	while(m < a)
	{
		for(int i = 0; i < m; i++) cout << "~";
		for(int i = 0; i < n; i++) cout << "*";
		m++;
		cout << endl;
	}
}

