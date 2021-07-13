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
	int n;
	cin >> n;
	int m = n;
	int hang = 0, nga = 2 * hang;
	while(hang < m)
	{
		for(int i = 0; i < nga; i++) cout << "~";
		for(int i = 0; i < n; i++) cout << "*";
		n--;
		hang++;
		nga = 2 * hang;
		cout << endl;
	}
	nga -= 2;
	n++;
	while(hang < 2 * m - 1)
	{
		nga -= 2;
		n++;
		for(int i = 0; i < nga; i++) cout << "~";
		for(int i = 0; i < n; i++) cout << "*";
		cout << endl;
		hang++;
	}
}

