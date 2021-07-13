/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
void kt(int n)
{
	int m = n, res = 0;
	while(m != 0)
	{
		int l = 1;
		int b = m % 10;
		for(int i = 1; i <= b; i++)
		{
			l *= i;
		}
		res += l;
		m /= 10;
	}
	if(res == n) cout << n << " ";
}
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		kt(i);
	}
}
