/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int dd[100000008];
int main()
{
	int l, r;
	cin >> l >> r;
	vector<int> a;
	for(int i = l; i <= r; i++)
	{
		if(check(i) == true) a.push_back(i);
	}
	for(int i = 0; i < a.size(); i++)
	{
		int m = a[i], kt = 1;
		while(m != 0)
		{
			m /= 10;
			if(m > 0 && check(m) == false)
			{
				kt = 0;
				break;
			}
		}
		if(kt == 1) cout << a[i] << " ";
	}
}

