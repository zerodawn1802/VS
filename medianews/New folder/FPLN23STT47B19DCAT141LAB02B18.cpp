/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
unsigned long long b[99];
void fibo()
{
	b[1] = 1;
	for(int i = 2; i < 99; i++)
	{
		b[i] = b[i - 1] + b[i - 2];
	}
}
int main()
{
	fibo();
	int n;
	scanf("%d", &n);
	int a[n][n];
	int d = 0, k = 0;
	int hang = n - 1, cot = n - 1;
	while(d <= n / 2)
	{
		for(int i = d; i <= cot; i++) a[d][i] = b[k++];
		for(int i = d + 1; i <= hang; i++) a[i][cot] = b[k++];
		for(int i = cot - 1; i >= d; i--) a[hang][i] = b[k++];
		for(int i = hang - 1; i > d; i--) a[i][d] = b[k++];
		d++;
		cot--;
		hang--;
	}
	for(int i = 0;i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
