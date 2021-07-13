/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
float float_rand( float min, float max)
{
    float scale = rand() / (float)1;
    return min + scale * (max - min);
}
int main()
{
	const char *filePath = "C:/Users/phuon/OneDrive/Desktop/FPLN23STT47B19DCAT141LAB02B11FILETXT.fpl.txt";
	FILE *file;
	file = fopen(filePath, "w");
	int m;
	scanf("%d", &m);
	for(int i = 0; i < 1000; i++)
	{
		float c = float_rand(0, m);
		fwrite(file, "%f", c);
	}
}

