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
	int max = a;
	if(max < b) max = b;
	int m = 0, n = b - 1;
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
		{
			if(i + j <= n) cout << max - i;
			else cout << max + j - n;
		}
		cout << endl;
	}
}

