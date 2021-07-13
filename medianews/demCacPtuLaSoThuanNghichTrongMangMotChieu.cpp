/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
vector<int> s;
void kt(int n)
{
	int res = 0, k = 0, m = n;
	while(m != 0)
	{
		int b = m % 10;
		res = res * 10 + b;
		k++;
		m /= 10;
	}
	if(k >= 2 && res == n) s.push_back(n);
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		kt(a[i]);
	}
	cout << s.size() << " ";
	for(int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
}
