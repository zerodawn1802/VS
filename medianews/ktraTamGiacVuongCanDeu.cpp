/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if(a == b && b == c) cout << 3;
	else if(a == b && b != c || a == c && a != b || b == c && b != a) cout << 2;
	else cout << 1;
}
