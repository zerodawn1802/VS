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
	int t;
	scanf("%d", &t);
	int a[t + 2];
	for(int i = 0; i < t; i++) scanf("%d", &a[i]);
	sort(a, a + t);
	int min = 100000000, m = 0, n = 0;
	for(int i = 1; i < t; i++)
	{
		int k = fabs(a[i] - a[i - 1]);
		if(k < min) min = k;
	}
	for(int i = 1; i < t; i++)
	{
		if(fabs(a[i] - a[i - 1]) == min)
		{
			m = a[i];
			n = a[i - 1];
			break;
		}
	}
	printf("%d %d %d", min, n, m);
}
