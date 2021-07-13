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
		for(int j = 0; j <= 2 * n - 1; j++)
		{
			if(i + j <= n - 1 || j - i >= n) printf("*");
			else printf("~");
		}
		printf("\n");
	}
	for(int i = n + 1; i <= 2 * n - 1; i++)
	{
		for(int j = 0; j <= 2 * n - 1; j++)
		{
			if(i - j >= n || i + j >= 3 * n - 1) printf("*");
			else printf("~");
		}
		printf("\n");
	}
}
