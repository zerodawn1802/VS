/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int k = 1;
	if(n > 0)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				printf("%d ", k++);
			}
			printf("\n");
		}
	}
	return 0;
}
