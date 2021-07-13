#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int dd[102] = {0};
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 25) dd[a[i]]++;
		if(a[i] == 50)
		{
			if(dd[25] == 0)
			{
				cout << "NO";
				return 0;
			}
			else
			{
				dd[a[i]]++;
				dd[25]--;
			}
		}
		if(a[i] == 100)
		{
			if(dd[50] >= 1 && dd[25] >= 1)
			{
				dd[a[i]]++;
				dd[50]--;
				dd[25]--;
			}
			else
			{
				cout << "NO";
				return 0;
			}
		}	
	}
	cout << "YES";
}
