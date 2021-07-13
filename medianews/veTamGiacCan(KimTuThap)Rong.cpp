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
		for(int j = 0; j < 2 * n - 1; j++)
		{
			if(i == n - 1) printf("*");
			else if(i + j < n - 1) printf("~");
			else if(j - i >= n) printf(" ");
			else if(i + j == n - 1 || j - i == n - 1) printf("*");
			else printf(".");
		}
		printf("\n");
	}
}
