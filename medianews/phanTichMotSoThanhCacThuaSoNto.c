/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <stdio.h>
#include <math.h>
int main()
{
	int n, m;
	scanf("%d", &n);
	m = n;
	for(int i = 2; i < 10000; i++)
	{
		int kt = 1;
		if(m == 1) return 0;
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0)
			{
				kt = 0;
				break;
			}
		}
		if(kt == 1 && m % i == 0)
		{
			printf("%d ", i);
			while(m % i == 0)
			{
				m /= i;
			}
		}
	}
}

