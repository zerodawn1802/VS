/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <stdio.h>
int main()
{
	int dem = 2;
	int n;
	scanf("%d", &n);
	int i = 0, j = 1;
	printf("%d ", i);
	while(dem <= n)
	{
		if(dem <= n)
		{
			j = i + j;
			printf("%d ", j);
			dem++;
			if(dem <= n)
			{
				i = j + i;
				printf("%d ", i);
				dem++;
			}
		}
	}
}
