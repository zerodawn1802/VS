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
	cout << n / 365 << " " << (n - (n / 365) * 365) / 7 << " " << n - ((n - (n / 365) * 365) / 7) * 7 - (n / 365) * 365;
}
