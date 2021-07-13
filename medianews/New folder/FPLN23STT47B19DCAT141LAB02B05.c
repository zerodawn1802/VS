/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
int n;
int tongCS(int n, int k);
int main()
{
	scanf("%d", &n);
	printf("%d", tongCS(n, 0));
}
int tongCS(int n, int k)
{
	int b = n % 10;
	k += b;
	n /= 10;
	if(n != 0) tongCS(n, k);
	else return k;
}
