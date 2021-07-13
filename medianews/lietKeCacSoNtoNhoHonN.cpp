/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <stdio.h>
#include <math.h>
int main()
{
	int n, kt = 1;
	scanf("%d", &n);
	for(int i = 2; i < n; i++)
	{
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0)
			{
				kt = 0;
				break;
			}
		}
		if(kt == 1) printf("%d ", i);
		else kt = 1;
	}
}

