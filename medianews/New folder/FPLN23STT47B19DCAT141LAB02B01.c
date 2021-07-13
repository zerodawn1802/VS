#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct sinhVien
{
	char fullname[30];
	char ten[10];
	char ho[10];
	char dem[10];
};
typedef struct sinhVien SinhVien;
void dlt(char arr[], int vitri)
{
	int len = strlen(arr);
	for (int i = vitri; i < len - 1; i++) arr[i] = arr[i + 1];
	arr[len - 1] = '\0';
}
void sortSV(SinhVien sv[], int k)
{
	bool kt;
	for (int i = 0; i < k - 1; i++)
	{
		kt = false;
		for (int j = 0; j < k - i - 1; j++)
		{
			if (strcmp(sv[j].ten, sv[j + 1].ten) > 0)
			{
				SinhVien temp;
				temp = sv[j];
				sv[j] = sv[j + 1];
				sv[j + 1] = temp;
				kt = true;
			}
			else
			{
				if (strcmp(sv[j].ten, sv[j + 1].ten) == 0)
				{
					if (strcmp(sv[j].dem, sv[j + 1].dem) > 0)
					{
						SinhVien temp;
						temp = sv[j];
						sv[j] = sv[j + 1];
						sv[j + 1] = temp;
						kt = true;
					}
					else
					{
						if (strcmp(sv[j].dem, sv[j + 1].dem) == 0)
						{
							if (strcmp(sv[j].ho, sv[j + 1].ho) > 0)
							{
								SinhVien tmp = sv[j];
								sv[j] = sv[j + 1];
								sv[j + 1] = tmp;
								kt = true;
							}
						}
					}
				}
			}
		}
		if (!kt) break;
	}
}
int inPut(SinhVien sv[])
{
	char ten[20];
	char ho[20];
	char dem[20];
	char hoten_SinhVien[60];
	int i = 0;
	int j;
	while (true)
	{
		gets(sv[i].fullname);
		if (sv[i].fullname[0] == '\0')
		{
			break;
		}
		else
		{
			j = 0;
			strcpy(hoten_SinhVien, sv[i].fullname);
			while (hoten_SinhVien[0] != ' ')
			{
				ho[j] = sv[i].fullname[0];
				dlt(hoten_SinhVien, 0);
				j++;
			}
			ho[j] = '\0';
			j = 0;
			strcpy(sv[i].ho, ho);
			dlt(hoten_SinhVien, 0);
			while (hoten_SinhVien[strlen(hoten_SinhVien) - 1] != ' ')
			{
				ten[j] = hoten_SinhVien[strlen(hoten_SinhVien) - 1];
				dlt(hoten_SinhVien, strlen(hoten_SinhVien) - 1);
				j++;
			}
			ten[j] = '\0';
			strrev(ten);
			strcpy(sv[i].ten, ten);
			dlt(hoten_SinhVien, strlen(hoten_SinhVien) - 1);
			strcpy(sv[i].dem, hoten_SinhVien);
		}
		i++;
	}
	return i;
}
int findSV(SinhVien sv[], char ten[], int n)
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(strcmp(sv[i].ten, ten) == 0)
		{
			count++;
		}
	}
	return count;
}
void outPut(SinhVien sv[], int k)
{
	for (int i = 0; i < k; i++)
	{
		printf("%s\n", sv[i].fullname);
	}
}

int main()
{
	SinhVien sv[100];
	char ten[20];
	int n = inPut(sv);
	sortSV(sv, n);
	gets(ten);
	outPut(sv, n);
	printf("%d", findSV(sv, ten, n));
	return 0;
}

