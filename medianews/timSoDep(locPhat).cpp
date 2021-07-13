/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	while(n != 0)
	{
		int b = n % 10;
		n /= 10;
		if(b != 0 && b != 6 && b != 8)
		{
			cout << 0;
			return 0;
		}
	}
	cout << 1;
}
