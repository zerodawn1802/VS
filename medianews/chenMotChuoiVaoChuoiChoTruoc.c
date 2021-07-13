/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], b[100];
	gets(a);
	gets(b);
	int dda = strlen(a), p;
	scanf("%d", &p);
	int kt = 1;
	for(int i = 0; i < dda; i++)
	{
		if(i + 1 == p)
		{
			printf("%s%c", b, a[i]);
			kt = 0;
		}
		else printf("%c", a[i]);
	}
	if(kt == 1) printf("%s", b);
}

