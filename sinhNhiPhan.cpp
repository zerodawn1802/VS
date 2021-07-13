/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <bits/stdc++.h>
using namespace std;
int n;
bool kt(int a[])
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0) return false;
	}
	return true;
}
int main()
{
	cin >> n;
	int a[n] = {0};
	for(int i = 0; i < n; i++)
	{
		a[i] = 0;
		cout << a[i];
	}
	cout << endl;
	while(kt(a) == false)
	{
		for(int i = n - 1; i >= 0; i--)
		{
			if(a[i] == 0)
			{
				a[i] = 1;
				for(int j = i + 1; j < n; j++)
				{
					a[j] = 0;
				}
				break;
			}
		}
		for(int i = 0; i < n; i++)
		{
			cout << a[i];
		}
		cout << endl;
	}
}

