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
		string str;
		cin >> str;
		int l = str.size() + 1;
		int a[l], dd[l] = {0};
		if(str[0] == 'I' && l == 2)
		{
			cout << "12" << endl;
		}
		else if(str[0] == 'D' && l == 2)
		{
			cout << "21" << endl;
		}
		else
		{
			
			for(int i = 0; i < l; i++)
			{
				a[i] = i + 1;
				dd[a[i]] = 1; 
			}
			if(str[0] == 'I')
			{
				cout << "1";
				dd[1] = 0;
				int dem = 0;
				for(int i = 1; i < str.size(); i++)
				{
					if(str[i] == 'D') dem++;
					else
					{
						int key;
						for(int j = 0; j < l; j++)
						{
							if(dd[a[j]] != 0)
							{
								key = j;
								break;
							}
						}
						for(int j = key + dem ; j >= key; j--)
						{
							cout << a[j];
							dd[a[j]] = 0;
						}
						dem = 0;
					}
				}
				for(int i = l - 1; i >= 0; i--) if(dd[a[i]] != 0) cout << a[i];
				cout << endl;
			}
			else
			{
				int dem = 0;
				for(int i = 0; i < str.size(); i++)
				{
					if(str[i] == 'D') dem++;
					else
					{
						int key;
						for(int j = 0; j < l; j++)
						{
							if(dd[a[j]] != 0)
							{
								key = j;
								break;
							}
						}
						for(int j = key + dem; j >= key; j--)
						{
							cout << a[j];
							dd[a[j]] = 0;
						}
						dem = 0;
					}
				}
				for(int i = l - 1; i >= 0; i--) if(dd[a[i]] != 0) cout << a[i];
				cout << endl;
			}
		}
	}
}

