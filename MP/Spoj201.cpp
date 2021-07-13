#include <bits/stdc++.h>
using namespace std;
int dd[10005];
int b[50];
void fibo()
{
	b[0] = 0;
	b[1] = 1;
	dd[0] = dd[1] = 1;
	for(int i = 2; i < 20; i++)
	{
		b[i] = b[i - 1] + b[i - 2];
		dd[b[i]] = 1;
	}
}
int main()
{
	int t;
	cin >> t;
	fibo();
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = 0; i < n; i++)
		{
			if(dd[a[i]] == 1)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}
