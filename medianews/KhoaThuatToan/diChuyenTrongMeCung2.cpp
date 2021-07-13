/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int n, a[11][11], ok[11][11];
vector<string> res;
void quayXe(int i, int j, string s)
{
	if(a[1][1] == 0 || a[n][n] == 0) return;
	if(i == n && j == n) res.push_back(s);
	if(a[i + 1][j] == 1 && i != n && !ok[i + 1][j])
	{
		ok[i][j] = true;
		quayXe(i + 1, j, s + "D");
		ok[i][j] = false;
	}
	if(a[i][j + 1] == 1 && j != n && !ok[i][j + 1])
	{
		ok[i][j] = true;
		quayXe(i, j + 1, s + "R");
		ok[i][j] = false;
	}
	if(a[i - 1][j] == 1 && i != 1 && !ok[i - 1][j])
	{
		ok[i][j] = true;
		quayXe(i - 1, j, s + "U");
		ok[i][j] = false;
	}
	if(a[i][j - 1] == 1 && j != 1 && !ok[i][j - 1])
	{
		ok[i][j] = true;
		quayXe(i, j - 1, s + "L");
		ok[i][j] = false;
	}
	
}
void process()
{
	res.clear();
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			ok[i][j] = false;
		}
	}
	quayXe(1, 1, "");
	if(res.size() == 0) cout << "-1";
	else
	{
		sort(res.begin(), res.end());
		for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
	}
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		process();
	}
}

