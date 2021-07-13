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
	bool kt = false;
	int dd, tmp;
	for(int i = strlen(c) - 1; i >= 0; i--)
	{
		if(c[i] != ' ' )	kt = true;
		if(kt == true)
		{
			if(c[i] == ' ' && c[i - 1] != ' ')
			{
				dd = i;
				break;
			}
		}
	}
	for(int i = 0; i <= dd; i++)
	{
		if(c[i] == ' ' && c[i - 1] != ' ' )
		{
			tmp = i;
			for(int j = i - 1; j>=0; j--)
			{
				if(c[j - 1] ==' ' || j == 0)
				{
					for(int k = j; k < i; k++)
					{
						if(k == j)
						{
							strupr(&c[k]);
							printf("%c", c[k]);
						}
						else
						{
							strlwr(&c[k]);
							printf("%c",c[k]);		
						}
					}
					if(i < dd) printf(" ");
					break;
				}
			}					
		}
	}
	printf(", ");
	for(int i = strlen(c) - 1; i >= 0; i--)
	{
		if(c[i] == ' ' && isalpha(c[i+1]) != 0)
		{
			for(int k = i + 1; k < strlen(c); k++)
			{
				strupr(&c[k]);
				printf("%c", c[k]);
			}
			break;	
		}
	}
	return 0;
}
