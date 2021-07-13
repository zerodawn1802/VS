/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	vector<int> s;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(ktnt(a[i])) s.push_back(a[i]);
	}
	cout << s.size() << " ";
	for(int i = 0; i < s.size(); i++) cout << s[i] << " ";
}

