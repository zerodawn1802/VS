/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B */
#include <bits/stdc++.h>
void quickSort(int a[], int l, int r)
{
	int i = l, j = r;
	int tmp;
	int p = a[(l + r) / 2];
	while(i <= j)
	{
		while(a[i] < p) i++;
		while(a[j] > p) j--;
		if(i <= j)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++; j--;
		}
	}
	if(l < j) quickSort(a, l, j);
	if(i < r) quickSort(a, i, r);
}
int binarySearch(int a[], int key, int l, int r)
{
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(a[mid] == key) return mid;
		else if(a[mid] > key) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}
using namespace std;
int main()
{
	
}

