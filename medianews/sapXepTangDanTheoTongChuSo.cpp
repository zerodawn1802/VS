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
	int m = a, n = b, resa = 0, resb = 0;
	while(m != 0)
	{
		int p = m % 10;
		resa += p;
		m /= 10;
	}
	while(n != 0)
	{
		int p = n % 10;
		resb += p;
		n /= 10;
	}
	if(resa > resb) cout << b << " " << a;
	else cout << a << " " << b;
}

