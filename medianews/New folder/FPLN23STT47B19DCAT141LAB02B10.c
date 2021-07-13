/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
#include <math.h>
int main()
{
	const char *filePath = "C:/Users/phuon/OneDrive/Desktop/FPLN23STT47B19DCAT141LAB02B09FILETXT.fpl.txt";
	FILE *file;
	file = fopen(filePath, "r");
	int n, p = 0, S = 0, a[100], dem = 0;
	while(p != 100)
	{
		fscanf(file, "%d", &n);
		S += n;
		a[p] = n;
		p++;
	}
	printf("%d\n", S);
	int min = a[0];
	for(int i = 1; i < p; i++)
	{
		if(a[i] < min) min = a[i];
	}
	for(int i = 0; i < p; i++)
	{
		if(a[i] == min) dem++;
	}
	printf("%d %d\n", min, dem);
	int dem2 = 0;
	for(int i = 0; i < p; i++)
	{
		int kt = 1;
		for(int j = 2; j <= sqrt(a[i]); j++)
		{
			if(a[i] % j == 0)
			{
				kt = 0;
				break;
			}
		}
		if(kt == 1) dem2++;
	}
	printf("%d", dem2);
}

