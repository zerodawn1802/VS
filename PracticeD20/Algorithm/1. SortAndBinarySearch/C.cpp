/*
Cho số nguyên dương a có N chữ số và số dãy s có M chữ số.
Chữ số ở vị trí j (1≤j≤M) của dãy s có thể chọn bất kì vị trí i (1≤i≤N) trong số a và thay thế bằng sj.
Mỗi chữ số của dãy s chỉ được thay thế không quá một lần.
Nhiệm vụ của bạn là hãy tìm cách thay sao cho số a đạt giá trị lớn nhất.
Bạn có thể không cần sử dụng tất cả các chữ số trong s.
Input:
    Dòng đầu chứa số nguyên dương T (1≤T≤100).
    Dòng thứ 2 chứa dãy a có độ dài N (không bắt đầu bằng chữ số 0).
    Dòng thứ 3 chứa dãy s có độ dài M (1≤N,M≤105)
Output:
    Số a lớn nhất có thể thay thế được.
*/
#include<bits/stdc++.h>
using namespace std;
void quick_sort(string &a, int l, int r)
{
	if (l > r) return;
	char pivot = a[(l + r) / 2];
	int i = l, j = r;
	while (i <= j)
	{
		while (i <= j && a[i] > pivot) i++;
		while (i <= j && a[j] < pivot) j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	quick_sort(a, l, j);
	quick_sort(a, i, r);
}
void biggest(string &s1, string &s2)
{
	int i = 0, j = 0;
	while (i < s1.length() && j < s2.length())
	{
		if (s1[i] < s2[j]) 
		{
			cout << s2[j];
			j++;
		}
		else cout << s1[i];
		i++;
	}
	while (i < s1.length())
	{
		cout << s1[i];
		i++;
	}
	cout << endl;
}
void solve()
{
	string s1, s2;
	cin >> s1 >> s2;
	quick_sort(s2, 0, s2.length() - 1);
	biggest(s1, s2);
}
int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}