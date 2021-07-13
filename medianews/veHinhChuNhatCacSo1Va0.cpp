/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int k = 1;
	if(a * b % 2 == 1)
	{
		for(int i = 0; i < a; i++)
		{
			for(int j = 0; j < b; j++)
			{
				cout << k;
				if(k == 1) k = 0;
				else k = 1;
			}
			cout << endl;
		}
	}
	else
	{
		for(int i = 0; i < a; i++)
		{
			int tmp = k;
			for(int j = 0; j < b; j++)
			{
				cout << k;
				if(k == 1) k = 0;
				else k = 1;
			}
			cout << endl;
			if(tmp == 1) k = 0;
			else k = 1;
		}
	}
}

