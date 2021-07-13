#include <bits/stdc++.h>
using namespace std;
int dd[1000006];
vector<int> a;
int n;
void snt()
{
	for(int i = 0; i < 1000006; i++)
	{
		dd[i] = 1;
	}
	dd[0] = dd[1] = 0;
	for(int i = 2; i < 1000006; i++)
	{
		for(int j = i * 2; j < 1000006; j += i)
		{
			dd[j] = 0;
		}
	}
	for(int i = 0; i < 1000006; i++)
	{
		if(dd[i] == 1) a.push_back(i);
	}
}
void process()
{
	cin >> n;
	cout << "1 ";
	for(int i = 2; i <= n; i++)
	{
		for(int j = 0; j < a.size(); j++)
		{
			if(i % a[j] == 0)
			{
				cout << a[j] << " ";
				break;
			}
		}
	}
	cout << endl;
}
int main()
{
	snt();
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		process();
	}
}
