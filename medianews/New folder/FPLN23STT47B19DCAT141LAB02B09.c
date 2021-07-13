/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
#include <stdlib.h>
void writeToFile(FILE *file, int m)
{
	int c = 0 + rand() % (m + 1);
	fprintf(file, "%d ", c);
}
int main()
{
	const char *filePath = "C:/Users/phuon/OneDrive/Desktop/FPLN23STT47B19DCAT141LAB02B09FILETXT.fpl.txt";
	FILE *file;
	file = fopen(filePath, "w");
	int m, n = 1000;
	scanf("%d", &m);
	for(int i = 0; i < n; i++)
	{
		writeToFile(file, m);
	}
}

