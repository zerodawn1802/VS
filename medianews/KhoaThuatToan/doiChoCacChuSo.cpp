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
		int k;
		cin >> k;
		string str;
		cin >> str;
		vector<int> a;
		for(int i = 0; i < str.size(); i++)
		{
			int n = (int)(str[i] - '0');
			a.push_back(n);
		}
		int dem = 0, kt = 1;
		for(int i = 0; i < a.size() - 1; i++)
		{
			int max = -1, vt = -1;
			for(int j = i + 1; j < a.size(); j++)
			{
				if(a[j] >= max)
				{
					max = a[j];
					vt = j;
				}
			}
			if(vt == -1) break;
			else
			{
				if(max > a[i])
				{
					if(dem >= k) kt = 0;
					else
					{
						swap(a[i], a[vt]);
						dem++;
					}
				}
			}
			if(kt == 0) break;
		}
		for(int i = 0; i < a.size(); i++) cout << a[i];
		cout << endl;
	}
}

