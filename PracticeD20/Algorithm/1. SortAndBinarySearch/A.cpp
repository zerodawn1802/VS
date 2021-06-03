/*
Cho 1 dãy số nguyên. Bạn hãy tìm phần tử ở vị trí thứ k sau khi sắp xếp tăng dần.
Input:
	Dòng đầu tiên là 2 số n,k. (1≤n≤105, 1≤k≤n)
	Dòng tiếp theo là n số nguyên dương.(1≤a[i]≤105)
Output:
	Dòng duy nhất là kết quả của bài toán.
*/
#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
void quickSort(vector<int> &a, int l, int r)
{
	if(l > r) return;
	int pivot = a[(l + r) / 2];
	int i = l, j = r;
	while (i <= j)
	{
		while (a[i] < pivot) i++;
		while (a[j] > pivot) j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	};
	quickSort(a, l, j);
	quickSort(a, i, r);
}
void process()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        a.push_back(p);
    }
    quickSort(a, 0, n - 1);
    cout << a[k - 1];
}
int main()
{
    process();
}