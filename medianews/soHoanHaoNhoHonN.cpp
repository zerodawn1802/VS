/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
void kt(int n)
{
	int res = 1;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0 && i * i != n) res += i + n / i;
		else if(n % i == 0 && i * i == n) res += i;
	}
	if(res == n) cout << n << " ";
}
int main()
{
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++)
	{
		kt(i);
	}
}
