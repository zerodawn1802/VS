/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char c[50];
	gets(c);
	char min[10] = "", tmp[10] = "", max[10] = "";
	int dd = 0, maxs = 0 , mins = 10;
	for(int i=0 ; i < strlen(c) ; i++)
	{	
	
		if(c[i] == ' ' && isalpha(c[i - 1]) != 0)
		{	
			strncat(max, c + dd, i - dd );	
			strncat(min, c + dd, i - dd );
			dd = i + 1;
			break;
		}
	}
	for(int i = dd ; i <= strlen(c); i++)
	{
		if(c[i] == ' ' || c[i] == '\0' && c[i - 1] != ' ' )
		{
			if(strlen(max) < i - dd)
			{
				strcpy(max, tmp);
				strncat(max, c + dd, i - dd);
			}
			if(strlen(min) > i - dd)
			{
				strcpy(min, tmp);
				strncat(min, c + dd, i - dd);
			}
		}
		if(c[i] == ' ' && c[i + 1] != ' ') dd = i + 1;
	}
	printf(max);
	printf(" ");
	puts(min);
	return 0;
}
	

