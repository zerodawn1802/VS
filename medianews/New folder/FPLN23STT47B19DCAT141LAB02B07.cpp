/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr, N;
	int max, min, S = 0;
	scanf("%d", &N);
	ptr = (int*)calloc(N, sizeof(int));
	for(int i = 0; i < N; i++) *(ptr + i) = rand() % 100;
	max = *(ptr);
	min = *(ptr);
	for(int i = 0; i < N; i++)
	{
		if(*(ptr + i) > max) max = *(ptr + i);
		if(*(ptr + i) < min) min = *(ptr + i);
		S += *(ptr + i);
	}
	printf("%d\n%d\n%d", min, max, S);
	free(ptr);
    return 0;
}

