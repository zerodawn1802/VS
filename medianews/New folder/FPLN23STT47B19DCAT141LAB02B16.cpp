/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include<stdio.h>
#include <string.h>
#include <string.h>
typedef struct
{
	int id;
	char name[100];
	char msv[100];
} sinhvien;
FILE *f;
sinhvien sv;
int const size = sizeof(sinhvien);
void add()
{
	int n;
	scanf("%d", &n);
	f=fopen("masinhvien.bin", "wb");
	int stt=ftell(f)/size;
	fseek(f, 0, SEEK_END);
	for(int i = 1; i <= n; i++)
	{
		sv.id = i + stt;
		if(i == 1) gets(sv.name);
		gets(sv.msv);
		gets(sv.name);
		fwrite(&sv, size, 1, f);
	}
	fclose(f);
	printf("%d", n);
}
void fix()
{
	char s[100];
	sinhvien tmp;
	gets(tmp.msv);
	gets(s);
	gets(tmp.msv);
	gets(tmp.name);
	f=fopen("masinhvien.bin","rb+");
	rewind(f);
	while(fread(&sv, size, 1, f))
	{
		if(strlen(sv.msv) == strlen(s))
		{
			int res = 1;
			for(int i = 0; i < strlen(s); i++)
			{
				if(s[i] != (sv.msv)[i]) 
				{
					res = 0;
					break;
				}
			}
			if(res)
			{
				tmp.id = sv.id;
				fseek(f, -size, SEEK_CUR);
				fwrite(&tmp, size, 1, f);
				break;
			}
		}
	}
	fclose(f);
	printf("%s", tmp.msv);
}
void in()
{
	char s[100];
	gets (s);
	gets (s);
	f = fopen("masinhvien.bin", "rb");
	rewind(f);
	while(fread(&sv, size, 1, f))
	{
		int res = 1;
		if(strlen(s) > strlen(sv.msv)) res = 0;
		if(res) for(int i = 0; i < strlen(s); i++)
		{
			if(s[i] != sv.msv[i])
			{
				res = 0;
				break;
			}
		}
		if(res) printf("%d %s %s \n", sv.id, sv.name, sv.msv);
	}
	fclose (f);
}
int main()
{
	int step;
	scanf("%d", &step);
	switch(step)
	{
		case 1:
			add();
			break;
		case 2:
			fix();
			break;
		case 3:
			in();
			break;
	}
}
