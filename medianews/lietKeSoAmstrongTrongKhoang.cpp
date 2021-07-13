/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
void kt(int n)
{
	int m = n, l = n;
	int k = 0;
	while(m != 0)
	{
		m /= 10;
		k++;
	}
	int res = 0;
	while(l != 0)
	{
		int s = 1;
		int b = l % 10;
		for(int i = 1; i <= k; i++)
		{
			s *= b;
		}
		res += s;
		l /= 10;
	}
	if(res == n) cout << n << " ";
}
int main()
{
	int a, b;
	cin >> a >> b;
	if(a > b) swap(a, b);
	for(int i = a; i <= b; i++)
	{
		kt(i);
	}
}
