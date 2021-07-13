/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int res = 1;
	while(n != 0)
	{
		int b = n % 10;
		res *= b;
		n /= 10;
	}
	printf("%d", res);
}

