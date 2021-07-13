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
	int t;
	cin >> t;
	while(t--)
	{
		int n, h;
		cin >> n >> h;
		double s = h / 2, s_i = h / 2 / n;
		double h_tmp = h / sqrt(n);
		for(int i = 0; i < n - 1; i++)
		{
			printf("%.6lf ", h_tmp * sqrt(i + 1));
		}
		cout << endl;
	}
}

