/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		vector<int> a;
		while(n)
		{
			a.push_back(n % 10);
			n /= 10;
		}
		reverse(a.begin(), a.end());
		long long res = 0;
		for(int i = 0; i < a.size(); i++)
		{
			long long tmp = 0;
			for(int j = i; j < a.size(); j++)
			{
				tmp = 10 * tmp + a[j];
				res += tmp;
			}
		}
		cout << res << endl;
	}
}

