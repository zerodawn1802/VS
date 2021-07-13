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
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
		{
			if(i == 0 || i == a - 1 || j == 0 || j == b - 1) cout << "1";
			else cout << "0";
		}
		cout << endl;
	}
}

