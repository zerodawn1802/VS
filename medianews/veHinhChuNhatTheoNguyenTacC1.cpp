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
	if(a <= b)
	{
		for(int i = 0; i < a; i++)
		{
			for(int j = 0; j < b; j++)
			{
				if(i + j < b) cout << i + j + 1;
				else cout << b - j;
			}
			cout << endl;
		}
	}
	else
	{
		for(int i = 0; i < a; i++)
		{
			for(int j = 0; j < b; j++)
			{
				if(j == 0) cout << i + 1;
				else if(i + j < b) cout << i + j + 1;
				else cout << b - j;
			}
			cout << endl;
		}
	}
}

