/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(j - i > 0) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	for(int i = n; i < 2 * n - 1; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i + j < 2 * n - 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

