#include <stdio.h>
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
void them()
{
	int n;
	scanf("%d", &n);
	f = fopen("masinhvien.bin", "wb");
	int id = ftell(f) / size;// kiem tra so luong sinh vien trong file
	fseek(f, 0, SEEK_END);// dua con tro ve cuoi file ghi
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
void sua()
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
	printf("%d", tmp.msv);
}
void danhsach()
{
	f = fopen("masinhvien.bin", "rb");
	rewind(f);
	while(fread(&sv, size, 1, f))
	{
		if(sv.A <= sv.B && sv.B <= sv.C)
		{
			printf("%d %s %.1f %.1f %.1f\n", sv.msv, sv.name, sv.A, sv.B, sv.C);
		}
	}
	fclose(f);
}
int main ()
{
	int step;
	scanf("%d", &step);
	switch(step)
	{
		case 1:
			them();
			break;
		case 2:
			sua();
			break;
		case 3:
			danhsach();
			break;
	}
}
