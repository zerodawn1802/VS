/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int k = 1;
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
		{
			printf("%d", k);
			k++;
		}
		printf("\n");
	}
}

