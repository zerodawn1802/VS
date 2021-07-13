/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Nhom: 23
STT: 47
Lop: D19CQAT01-B
Ten hien thi email: Nguyen Minh Phuong
Dia chi email su dung: phuongacma1802@gmail.com */
#include <bits/stdc++.h>
using namespace std;
int n, k, a[102];
vector< vector<int> > res;
void quayXe(int i, int s, vector<int> v)
{
	if(s > k) return;
	if(s == k)
	{
		res.push_back(v);
		return;
	}
	for(int j = i; j <= n; j++)
	{
		if(s + a[j] <= k)
		{
			v.push_back(a[j]);
			quayXe(j, s + a[j], v);
			v.pop_back();
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		vector<int> v;
		v.clear();
		res.clear();
		quayXe(1, 0, v);
		if(res.size() == 0)
		{
			cout << -1 << endl;
			continue;
		}
		for(int i = 0; i < res.size(); i++)
		{
			cout << "[";
			for(int j = 0; j < res[i].size() - 1; j++)
			{
				cout << res[i][j] << " ";
			}
			cout << res[i][res[i].size() - 1] << "]";
		}
		cout << endl;
	}
}

