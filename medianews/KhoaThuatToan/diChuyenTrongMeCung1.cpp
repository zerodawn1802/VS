/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int n, a[11][11];
vector<string> res;
bool check = false;
void quayXe(int i, int j, string s)
{
	if(i == 1 && j == 1 && a[i][j] == 0)
	{
		check = false;
		return;
	}
	if(i == n && j == n && a[n][n])
	{
		res.push_back(s);
		check = true;
		return;
	}
	if(i < n && a[i + 1][j]) quayXe(i + 1, j, s + "D");
	if(j < n && a[i][j + 1]) quayXe(i, j + 1, s + "R");
	if((i < n && j < n && !a[i + 1][j] && a[i][j + 1])|| i > n || j > n) return;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		}
		res.clear();
		check = false;
		quayXe(1, 1, "");
		if(!check) cout << "-1";
		else
		{
			sort(res.begin(), res.end());
			for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
		}
		cout << endl;
	}
}

