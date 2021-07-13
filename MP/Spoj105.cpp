#include <bits/stdc++.h>
using namespace std;
int dd[1000006];
vector<int> a;
void snt()
{
	for(int i = 0; i < 1000006; i++)
	{
		dd[i] = 1;
	}
	dd[0] = 0; dd[1] = 0;
	for(int i = 0; i < 1000006; i++)
	{
		if(dd[i] == 0) continue;
		for(int j = 2 * i; j < 1000006; j += i)
		{
			dd[j] = 0;
		}
	}
	for(int i = 0; i < 1000006; i++)
	{
		if(dd[i] == 1) a.push_back(i);
	}
}
int main()
{
	snt();
	int n;
	cin >> n;
	while(n != 0)
	{
		int dem = 0;
		for(int i = 0; i < a.size(); i++)
		{
			if(a[i] > n && a[i] <= 2 * n) dem++;
		}
		cout << dem << endl;
		cin >> n;
	}
}

