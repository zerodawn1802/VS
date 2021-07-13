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
	int m = a, n = b;
	while(a != b)
	{
		if(a > b) a -= b;
		else b -= a;
	}
	cout << a << " " << m * n / a;
}
