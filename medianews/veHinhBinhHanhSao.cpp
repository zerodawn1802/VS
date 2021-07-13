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
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 2 * n - 1; j++)
		{
			if(i + j < n - 1) cout << "~";
			else if(i + j >= 2 * n - 1) cout << " ";
			else cout << "*";
		}
		cout << endl;
	}
}
