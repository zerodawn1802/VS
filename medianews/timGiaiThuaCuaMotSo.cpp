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
	long long res = 1;
	for(int i = 2; i <= n; i++)
	{
		res *= i;
	}
	cout << res;
}
