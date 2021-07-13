/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a = 0, b = 1;
	cin >> n;
	if(a == n || b == n)
	{
		cout << "1";
		return 0;
	}
	while(a <= n && b <= n)
	{
		a = a + b;
		b = b + a;
		if(a == n || b == n)
		{
			cout << "1";
			return 0;
		}
	}
	cout << 0;
}

