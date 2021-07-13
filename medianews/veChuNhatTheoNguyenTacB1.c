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
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
		{
			if(i + j < b) printf("%d", i + j + 1);
			else printf("%d", b);
		}
		printf("\n");
	}
}

