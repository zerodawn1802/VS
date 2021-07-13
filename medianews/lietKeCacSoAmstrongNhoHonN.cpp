/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
void ktr(int n)
{
	int m = n, l = n, k = 0, res = 0;
	while(m != 0)
	{
		k++;
		m /= 10;
	}
	while(l != 0)
	{
		int b = l % 10;
		int s = 1;
		for(int i = 1; i <= k; i++)
		{
			s *= b;
		}
		res += s;
		l /= 10;
	}
	if(res == n) cout << res << " ";
}
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		ktr(i);
	}
}

