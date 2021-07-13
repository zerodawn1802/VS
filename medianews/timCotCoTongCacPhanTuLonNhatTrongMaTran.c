/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n];
	int b[100005] = {0};
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
			b[j] += a[i][j];
		}
	}
	int max = b[0], kt = 0;
	for(int i = 1; i < n; i++)
	{
		if(b[i] > max)
		{
			max = b[i];
			kt = i;
		}
	}
	printf("%d\n", kt + 1);
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i][kt]);
	}
}

