#include <bits/stdc++.h>
using namespace std;
int a[104][104];
int main()
{
	int n;
	cin >> n;
	int b[10004];
	for(int i = 0; i < n * n; i++)
	{
		cin >> b[i];
	}
	sort(b, b + n*n);
	int p = 0;
	for(int i = 0; i < n; i++)
	{
		if(i % 2 == 0)
		{
			for(int j = 0; j < n; j++)
			{
				a[i][j] = b[p];
				cout << a[i][j] << " ";
				p++;
			}
			cout << endl;
		}
		else
		{
			p += n - 1;
			for(int j = n - 1; j >= 0; j--)
			{
				a[i][j] = b[p];
				cout << a[i][j] << " ";
				p--;
			}
			cout << endl;
			p += n + 1;
		}
	}
}
