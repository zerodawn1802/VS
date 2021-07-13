#include<stdio.h>
#include <string.h>
#include <io.h>
typedef struct
{
	int msv;
	char name[100];
	float A,B,C;
} sinhvien;
FILE *f;
sinhvien sv;
int const size=sizeof(sinhvien);
void them()
{
	int n;
	scanf("%d",&n);
	f=fopen("masinhvien.bin","wb");
	int id=ftell(f)/size;// kiem tra so luong sinh vien trong file
	fseek(f,0,SEEK_END);// dua con tro ve cuoi file ghi
	for(int i=1;i<=n;i++)
	{
		sv.msv=i+id;
		gets(sv.name);
		gets(sv.name);
		scanf("%f%f%f",&sv.A,&sv.B,&sv.C);
		fwrite(&sv,size,1,f);
	}
	fclose(f);
	printf("%d",n);
}
void sua()
{
	sinhvien tmp;
	scanf("%d",&tmp.msv);
	gets(tmp.name);
	gets(tmp.name);
	scanf("%f%f%f",&tmp.A,&tmp.B,&tmp.C);
	f=fopen("masinhvien.bin","rb+");
	while (fread(&sv, size, 1, f)){
		if(sv.msv==tmp.msv)
		{
			fseek(f,-size,SEEK_CUR);
			fwrite(&tmp,size,1,f);
			break;
		}
	}
	fclose(f);
	printf("%d",tmp.msv);
}
void in()
{
	sinhvien a[1000];
	int i=0;
	f=fopen("masinhvien.bin","rb");
	rewind(f);
	while(fread(&sv,size,1,f))
	{
		a[i]=sv;
		i++;
	}
	fclose (f);
	for(int k=0;k<i;k++)
	{
		for(int j=k+1;j<i;j++)
		{
			if(a[k].A+a[k].B+a[k].C>a[j].A+a[j].B+a[j].C)
			{
				sv=a[k];
				a[k]=a[j];
				a[j]=sv;
			}
		}
	}
	for(int j=0;j<i;j++)
	{
		printf ("%d %s %.1f %.1f %.1f\n",a[j].msv, a[j].name,a[j].A,a[j].B,a[j].C);
	}
}
int main ()
{
	int step;
	scanf("%d",&step);
	switch(step)
	{
		case 1:
			them();
			break;
		case 2:
			sua();
			break;
		case 3:
			in();
			break;
	}
}
