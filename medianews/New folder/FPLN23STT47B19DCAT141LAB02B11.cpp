/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
#include <stdlib.h>
float arr[10004];
int main()
{
	int N = 1500, M;
	scanf("%d", &M);
	for(int i = 0; i < N; i++) arr[i] = (rand() / (float) RAND_MAX) * M;
	const char *filePath = "C:/Users/phuon/OneDrive/Desktop/FPLN23STT47B19DCAT141LAB02B11FILETXT.fpl.txt";
	FILE *file;
	file = fopen(filePath, "wb");
	if(file != NULL)
	{
		for(int i = 0; i <= N; i++) fwrite(&arr[i], sizeof(arr[i]), 1, file);
		fclose(file);
	}
	else printf("Can't creat file!");
    return 0;
}

