/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
int dd[10005];
void snt()
{
	for(int i = 0; i < 10005; i++) dd[i] = 1;
	dd[0] = 0; dd[1] = 0;
	for(int i = 2; i < 10005; i++)
	{
		if(dd[i] == 0) continue;
		for(int j = i * 2; j < 10005; j += i) dd[j] = 0;
	}
}
int main()
{
	snt();
	int s[10005], o = 1;
	for(int i = 2; i < 10005; i++)
	{
		if(dd[i] == 1)
		{
			s[o] = i;
			o++;
		}
	}
	int n;
	scanf("%d", &n);
	int a[n + 1][n + 1];
	int dong = n, cot = n, k = 1, p = 0;
	while(k <= n * n)
	{
		for(int i = p; i < cot; i++)
		{
			a[p][i] = s[k];
			k++;
		}
		for(int i = p + 1; i < dong; i++)
		{
			a[i][cot - 1] = s[k];
			k++;
		}
		for(int i = cot - 2; i >= p; i--)
		{
			a[dong - 1][i] = s[k];
			k++;
		}
		for(int i = dong - 2; i > p; i--)
		{
			a[i][p] = s[k];
			k++;
		}
		p++;
		dong--;
		cot--;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

