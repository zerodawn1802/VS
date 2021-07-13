/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, dem = 0;
	scanf("%d", &n);
	for(int i = 5; i < n; i++)
	{
		int kt = 1;
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0) kt = 0;
		}
		if(kt == 1)
		{
			int k = i, s = 0;
			while(k != 0)
			{
				int b = k % 10;
				s += b;
				k /= 10;
			}
			if(s % 5 == 0)
			{
				printf("%d ", i);
				dem++;
			}
		}
	}
	printf("\n%d", dem);
}

