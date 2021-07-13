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
	if(a > b) swap(a, b);
	int res = 0;
	for(int i = a; i <= b; i++) res+= i;
	cout << res;
}
