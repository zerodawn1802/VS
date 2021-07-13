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
	if(n < 2)
	{
		cout << 0;
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			cout << 0;
			return 0;
		}
	}
	cout << 1;
}

