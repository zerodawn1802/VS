/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include<stdio.h>
#include <string.h>
#include <io.h>
typedef struct
{
	int msv;
	char name[100];
	float A, B, C;
} sinhvien;
FILE *f;
sinhvien sv;
int const size = sizeof(sinhvien);
void add()
{
	int n;
	scanf("%d", &n);
	f=fopen("masinhvien.bin", "wb");
	int id = ftell(f) / size;
	fseek(f, 0, SEEK_END);
	for(int i = 1; i <= n; i++)
	{
		sv.msv = i + id;
		gets(sv.name);
		gets(sv.name);
		scanf("%f%f%f", &sv.A, &sv.B, &sv.C);
		fwrite(&sv, size, 1, f);
	}
	fclose(f);
	printf("%d", n);
}
void fix()
{
	sinhvien tmp;
	scanf("%d", &tmp.msv);
	gets(tmp.name);
	gets(tmp.name);
	scanf("%f%f%f", &tmp.A, &tmp.B, &tmp.C);
	f = fopen("masinhvien.bin", "rb+");
	while(fread(&sv, size, 1, f))
	{
		if(sv.msv == tmp.msv)
		{
			fseek(f, -size, SEEK_CUR);
			fwrite(&tmp, size, 1, f);
			break;
		}
	}
	fclose(f);
	printf("%d",tmp.msv);
}
void danhsach()
{
	f = fopen("masinhvien.bin", "rb");
	rewind(f);
	while (fread(&sv, size, 1, f))
	{
		if(sv.A <= sv.B && sv.B <= sv.C)
		{
			printf("%d %s %.1f %.1f %.1f\n", sv.msv, sv.name, sv.A, sv.B, sv.C);
		}
	}
	fclose(f);
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
			danhsach();
			break;
	}
}
