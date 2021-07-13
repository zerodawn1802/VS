/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[100005];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < n - i; j++)
		{
			if(a[j + 1] < a[j])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		for(int j = 0; j < n; j++) printf("%d ", a[j]);
		int dem = 0;
		for(int j = 0; j < n - 1; j++)
		{
			if(a[j] <= a[j + 1]) dem++;
		}
		if(dem == n - 1) break;
		printf("\n");
	}
}
