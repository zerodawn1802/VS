#include<bits/stdc++.h>
using namespace std;
long long dem = 0;
void quickSort(int a[], int l, int r,int n)
{
	int i = l, j = r;
	int p = a[(l + r) / 2];
	while(i <= j)
	{
		while(a[i] < p) i++;
		while(a[j] > p) j--;
		if(i <= j)
		{
			if(i < j) dem++;
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}
	if(i < r) quickSort(a, i, r, n);
	if(j > l) quickSort(a, l, j, n);
}
int main()
{
	int n;
	cin >> n;
	int a[100005];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	quickSort(a, 1, n, n);
	if(dem % 2 == 0) cout << 1;
	else cout << 0;
	return 0;
}
