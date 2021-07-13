/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <string.h>
#include <stdio.h>

int main()
{
	char s1[1000], s2[1000] = "", s3[100];
	char *token;
	const char *delim = " \n\t";
	gets(s1);
	strlwr(s1);
	token = strtok(s1, delim);
	while(token != NULL)
	{
		token[0] = token[0] - 32;
		strcat(s2, token);
		strcat(s2, " ");
		strcpy(s3, token);
		token = strtok(NULL, delim);
	}
	s2[strlen(s2) - strlen(s3) - 2] = '\0';
	strupr(s3);
	printf("%s, %s", s3, s2);
}
