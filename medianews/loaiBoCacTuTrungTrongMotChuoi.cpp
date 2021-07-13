/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
#include <string.h>
int count(char tam[], char s[])
{
	int i = 0, j = 0, counter = 0;
	char temp[100];
    for(i = 0; i < strlen(s); i++)
    {	if((i - 1 < 0 || s[i - 1] == ' ') && s[i] != ' ')
		{
            while(s[i] != ' ' &&  i < strlen(s) )
            {	temp[j] = s[i];
    	        i++;
				j++;
            }
            temp[j] = '\0';
            j = 0;
        	if(strcmp(tam, temp) == 0) counter++;
        }
    }
	return counter;
}
int main()
{
	char s[10000], s1[10000] = "";
	fflush(stdin);
	gets(s);    
	char *token = strtok(s, " ");
    while(token != NULL)
    {
		if(count(token, s1) == 0) 
		{ 
			strcat(s1, token);
			strcat(s1, " ");
		}		
    	token = strtok(NULL, " ");
    }
    printf("%s", s1);
}

