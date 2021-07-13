/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
int n;
int tinhTong(int n, int S);
int main()
{
	scanf("%d", &n);
	printf("%d", tinhTong(n, 0));
}
int tinhTong(int n, int S)
{
	int p = 1;
	for(int i = 1; i <= n; i++)
	{
		p = p * n;
	}
	S += p;
	n--;
	if(n < 1) return S;
	else tinhTong(n, S);
}
