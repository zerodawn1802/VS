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
		for(int j = 0; j < n; j++)
		{
			if(j == 0 || i == n - 1) cout << "*";
			else if(i == j) cout << "*";
			else if(i < j) cout << " ";
			else cout << ".";
		}
		cout << endl;
	}
}
