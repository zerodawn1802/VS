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
	char a[100];
	gets(a);
	int ddChuoi = 0;
	while(a[ddChuoi] != '\0')
	{
		ddChuoi++;
	}
	for(int i = 0; i < ddChuoi; i++)
	{
		if(a[i] != ' ') printf("%c", a[i]);
		else if(a[i] == ' ') printf("\n");
	}
}

