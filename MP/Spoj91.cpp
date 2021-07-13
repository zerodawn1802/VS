#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s, x;
	cin >> s >> x;
	vector<int> a(5);
	for(int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < 5; i++)
	{
		if(i != 4) cout << a[i] - s * x << " ";
		else cout << a[i] - s * x;
	}
}
